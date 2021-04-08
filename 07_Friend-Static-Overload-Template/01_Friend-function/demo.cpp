#include <iostream>
#include "Time.h"
#include "Match.h"
using namespace std;

/*
友元函数
    友元全局函数
    友元成员函数
 */
void printTime(Time &t);


int main(void){

    Time t(16, 34, 25);
    // 友元全局函数
    printTime(t);
    // 友元成员函数
    Match m;
    m.printTime(t);

    return 0;
}

void printTime(Time &t){
    cout << t.m_iHour << ":" << t.m_iMinute << ":" << t.m_iSecond << endl;
}