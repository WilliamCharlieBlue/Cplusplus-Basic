#include <iostream>
//#include "Infantry.h"
#include "Soldier.h"
using namespace std;

/*
Person类
    m_strName
    构造函数，play()
Soldier类
    构造函数，play(), work()
 */

int main(void){

    Soldier soldier;
    //soldier.play(); // Error when class Soldier: protected Person
    soldier.Person::play();
    soldier.play();
    soldier.work();
    soldier.Person::play();
    soldier.play();


    return 0;
}