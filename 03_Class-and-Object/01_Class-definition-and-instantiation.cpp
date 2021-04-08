#include <iostream>
using namespace std;

class Coordinate{
public:
    int x;
    int y;
    void printX(){cout << x << endl;}
    void printY(){cout << y << endl;}
};

int main(void){

// instantiation with Stack;
    Coordinate coor;
    coor.x = 10;
    coor.y = 20;
    coor.printX();
    coor.printY();

// instantiation with Heap;
    Coordinate *p = new Coordinate();
    if (NULL == p){ return 0;} // memory allocation failure
    p->x = 100;
    p->y = 200;
    p->printX();
    p->printY();

    delete p;
    p = NULL;

    return 0;
}