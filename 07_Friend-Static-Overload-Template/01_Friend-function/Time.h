#ifndef TIME_H
#define TIME_H

#include "Match.h"
#include <iostream>
using namespace std;

class Time{
    // 友元全局函数
    friend void printTime(Time &t);
    // 友元成员函数
    friend void Match::printTime(Time &t);

public:
    Time(int hour, int min, int sec);

public:
    int m_iHour;
protected:
    int m_iMinute;
private:
    int m_iSecond;
};

#endif