#include <iostream>
#include "Soldier.h"
using namespace std;

Soldier::Soldier(string name, int age) {
    m_strName = name;
    m_iAge = age;
    cout << "Soldier(string name, int age)" << endl;
}
Soldier::~Soldier(){
    cout << "~Soldier()" << endl;
}

void Soldier::work(){
    cout << "Soldier -- work()" << endl;
    cout << "Soldier: " << m_strName << endl;
    cout << "Soldier: " << m_iAge << endl;
}