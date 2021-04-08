#include <iostream>
#include "Time.h"
using namespace std;

Time::Time(int hour, int min, int sec) {
    m_iHour = hour;
    m_iMinute = min;
    m_iSecond = sec;
}

void Time::printTime() {
    cout << m_iHour << "H" << m_iMinute << "M" << m_iSecond << "S" << endl;
}