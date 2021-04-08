#ifndef TANK_H
#define TANK_H

#include <string>
using namespace std;

class Tank{
public:
    Tank(string code);
    ~Tank();
    void fire();
    static int getCount();

private:
    static int s_iCount;
    string m_sCode;
};

#endif