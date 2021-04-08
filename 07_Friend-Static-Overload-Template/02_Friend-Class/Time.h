#ifndef TIME_H
#define TIME_H

class Match;
class Time{
    friend Match;
public:
    Time(int hour, int min, int sec);
private:
    void printTime();

public:
    int m_iHour;
protected:
    int m_iMinute;
private:
    int m_iSecond;
};

#endif