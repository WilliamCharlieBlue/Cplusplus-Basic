#include <iostream>
#include "Infantry.h"
using namespace std;

Infantry::Infantry(string name, int age) {
    m_strName = name;
    m_iAge = age;
    cout << "Infantry(string name, int age)" << endl;
}

Infantry::~Infantry(){
    cout << "~Infantry()" << endl;
}

void Infantry::attack() {
    cout << "Infantry -- attack()" << endl;
    cout << "Infantry: "<< m_strName << endl;
    cout << "Infantry: "<< m_iAge << endl;
}