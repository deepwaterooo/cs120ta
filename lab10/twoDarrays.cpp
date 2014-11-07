#include<iostream>
using namespace std;

int main(){
	int array[10][20];
	array[4][8] = 99;
	cout << array[4][8] << endl;

	for(int i = 0; i < 10; i++){
		for(int j = 0; j < 20; j++){
			array[i][j] = 7;
		}
	}
	for(int i = 0; i < 10; i++){
		for(int j = 0; j < 20; j++){
			cout << array[i][j] << " ";
		}
		cout << endl;
	}


	for(int i = 0; i < 10; i++){
		for(int j = 1; j < 20; j++){
			array[i][j] += array[i][j-1];
		}
	}
	for(int i = 0; i < 10; i++){
		for(int j = 0; j < 20; j++){
			cout << array[i][j] << " ";
		}
		cout << endl;
	}

}
