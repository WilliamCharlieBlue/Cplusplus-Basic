#ifndef MATCH_H
#define MATCH_H

class Time; // 先声明一下Time这个类，否则下面的printTime会因为不存在Time类型而报错
class Match{
public:
    void printTime(Time &t);
};

#endif