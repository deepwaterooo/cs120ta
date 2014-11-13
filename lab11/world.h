const int height = 10;
const int width = 10;

class world {
 public:
    world();
    void set_up();
    void draw();
    void update();
 private:
    int terrain[width][height];
    robot* bots[width][height];
};

world::world() {
    
}

void world::set_up() {
    for (int i = 0; i < width; ++i) {
        for (int j = 0; j < width; ++j ) {
            bots[j][i] = NULL;
            terrain[j][i] = rand() % 2;
        }    
    }
    bots[2][2] = new robot(1);
    bots[7][7] = new robot(2);
}

void world::draw() {
    for (int i = 0; i < width; ++i) {
        for (int j = 0; j < width; ++j ) {
            if (bots[j][i] == NULL)
                cout << (char)(terrain[j][i]+45);
            else
                bots[j][i]->draw();
        }    
    }
    cout << endl;
    for (int i = 0; i < width; ++i) {
        for (int j = 0; j < width; ++j ) {
            if (bots[j][i] != NULL) {                
                bots[j][i]->print();
                bots[j][i]->refresh();
                cout << "\n";
            }
        }    
    }
    cout << endl;
}

void world::update() {
    int tmpx, tmpy;
    robot* tmp;
    for (int i = 0; i < width; ++i) {
        for (int j = 0; j < width; ++j ) {
            if (bots[j][i] != NULL) {
                tmpx = j;
                tmpy = i;
                bots[j][i]->move(tmpy, tmpx);
                if (tmpx < 0 || tmpx >= width)
                    tmpx = j;
                if (tmpy < 0 || tmpy >= height)
                    tmpy = i;
                if (bots[tmpy][tmpx] == NULL) {
                    tmp = bots[j][i];
                    bots[j][i] = NULL;
                    bots[tmpx][tmpy] = tmp;
                }
            } // if
        }    
    }
}
