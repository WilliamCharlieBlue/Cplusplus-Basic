#include <iostream>
//#include "Soldier.h"
#include "Infantry.h"
using namespace std;

/*
Person类
    m_strName
    构造函数，play()
Soldier类
    m_iAge
    构造函数，work()
Infantry类
    attack()
 */

int main(void){

    Soldier soldier;
    //soldier.play(); // Error when class Soldier: protected Person
    soldier.work();


    Infantry infantry;
    infantry.attack(); // Error when Infantry<-Public Soldier<-Private Person
    //infantry.attack(); // Success when Infantry<-PublicSoldier<-ProtectedPerson

    return 0;
}