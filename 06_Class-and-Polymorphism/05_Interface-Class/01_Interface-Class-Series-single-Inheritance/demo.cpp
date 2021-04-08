#include <iostream>
#include "FighterPlane.h"
using namespace std;

/*
接口类
    Flyable类
        takeoff(), land()
    Plane类
        m_strCode
        构造函数，析构函数，takeoff(), land(), printCode
    FigherPlane类
        构造函数，takeoff(), land()
    全局函数flayMatch(Flyable *f1, Flyable *f2)
 */


void flayMatch(Flyable *f1, Flyable *f2){
    f1->takeoff();
    f1->land();
    f2->takeoff();
    f2->land();
}

int main(void){

    Plane p("000");
    Plane p1("001");
    FighterPlane p2("002");
    p.printCode();
    p1.printCode();
    p2.printCode();

    flayMatch(&p1, &p2);

    return 0;
}