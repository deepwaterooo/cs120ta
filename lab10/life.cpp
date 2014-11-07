#include<cstdlib>
#include <iostream>
#include <curses.h>
#include"CursWin.h"
#include <unistd.h>
using namespace std;

// for big monitor
//const int width = 235;
//const int height = 58;

const int width = 176;
const int height = 47;


int main(){
    CursWin outwin(0,0,height+1,width+1);
	int array[height][width];
	int temp[height][width];
	int count;
    char symbol[10] = " .-*oO0@#";    

    initscr();

    // check if terminal support color
    if (has_colors() == true) {
        //printw("Color supported!\n");
        start_color();  // initialize color
    } else {
        //printw("Colors not supported!\n");
        refresh();
        endwin();
        exit(1);
    }

    // initialize all color pair
    for (int i = 0; i < COLORS; ++i)
        for (int j = 0; j < COLORS; ++j)
            init_pair(i * COLORS + j, i, j);
    refresh();

    /*
    // use color_pair to set attributes
    printw(" ");  // one space for alignment
    for (int i = 0; i < COLORS*COLORS; ++i) {
        attron(A_BOLD|COLOR_PAIR(i)); 
        printw(" %d", i);  
        if ((i + 1)/COLORS*COLORS == i + 1)  {
            attroff(A_BOLD | COLOR_PAIR(i)); 
            printw(" \n"); 
        }
        attroff(A_BOLD|COLOR_PAIR(i));  
    }
    */
    
	for(int i = 0; i < height; i++){
		for(int j = 0; j < width; j++){
			array[i][j] = rand() % 2;  // 0 or 1
			temp[i][j] = 0;  // start temp with all zeros
		}
	}

    while(1==1) {
        usleep(70000);

        // print an array
        for(int i = 0; i < height; i++){
            for(int j = 0; j < width; j++){
                if (array[i][j] <= 8) {                    
                    attron(A_BOLD|COLOR_PAIR(array[i][j])); // bold and color_pair(i)

                    outwin << Cmove(i,j) << symbol[array[i][j]];
                    outwin << cflush;
                } else {                    
                    attron(A_BOLD|COLOR_PAIR(9)); // bold and color_pair(i)
                    outwin << Cmove(i,j) << '#';
                    outwin << cflush;
                }
                attroff(A_BOLD | COLOR_PAIR(array[i][j]));
                
            }
        }

        // create the temp array
        for(int i = 0; i < height; i++){
            for(int j = 0; j < width; j++){

                // need to count neighbors
                count = 0;
                if (array[i][j] > 0) count = -1;
                for (int di = -1; di <= 1; di++) {
                    for (int dj = -1; dj <= 1; dj++) {
                        //count += array[(i+di+height)%height][(j+dj+width)%width];
                        if (array[(i+di+height)%height][(j+dj+width)%width] > 0)
                            count++;
                    }
                }

                if(count == 3)
                    temp[i][j] = array[i][j] + 1;
                else if(count == 2 && array[i][j])                
                    temp[i][j] = array[i][j] + 1;
                else 
                    //if(count != 3 && count != 2){
                    temp[i][j] = 0;
            }
        }

        // copy back to the original array
        for(int i = 0; i < height; i++){
            for(int j = 0; j < width; j++){
                array[i][j] = temp[i][j];
            }
        }
        //outwin << cflush;
    } // end while

    /*
    printw(" Any char to quit:");
    refresh();
    getch();
    endwin();
    exit(0);
    */
}
