#ifndef PLANE_H
#define PLANE_H

#include <string>
using namespace std;

class Plane{
public:
    Plane(string code);
    void printCode();

private:
    string m_strCode;
};
#endif