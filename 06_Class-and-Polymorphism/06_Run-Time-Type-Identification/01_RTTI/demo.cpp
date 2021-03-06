#include <iostream>
#include "Plane.h"
#include "Bird.h"
using namespace std;

/*
RTTI
    Flyable类
        takeoff(), land()
    Plane类
        takeoff(), land(), carry()
    Bird类
        takeoff(), land(), foraging()
    全局函数
        doSomething(Flyable *obj)
 */


void doSomething(Flyable *obj){
    cout << obj << " typeid: " << typeid(*obj).name() << endl;
    obj->takeoff();
    if(typeid(*obj) == typeid(Bird)){
        Bird *bird = dynamic_cast<Bird *>(obj);
        bird->foraging();
    }
    if(typeid(*obj) == typeid(Plane)){
        Plane *plane = dynamic_cast<Plane *>(obj);
        plane->carry();
    }
    obj->land();
}

int main(void){
    Bird b;
    doSomething(&b);
    Plane p;
    doSomething(&p);

    int i = 0;
    cout << typeid(i).name() << endl;
    double d = 0;
    cout << typeid(d).name() << endl;
    Flyable *f = new Bird();
    cout << typeid(f).name() << endl;
    cout << typeid(*f).name() << endl;
    delete f;
    f = NULL;

    return 0;
}