#include <iostream>
#include "Tank.h"
using namespace std;

int Tank::s_iCount = 0;

Tank::Tank(string code) {
    m_sCode = code;
    s_iCount++;
    cout << "Tank(string code)" << endl;
}

Tank::~Tank() {
    s_iCount--;
    cout << "~Tank() " << endl;
}

void Tank::fire() {
    cout << "Tank -> fire" << endl;
    cout << "Tank numbers: " << getCount() << endl;
}

int Tank::getCount() {
    //fire(); // Error, 静态成员函数不能调用普通成员函数
    return s_iCount;
}