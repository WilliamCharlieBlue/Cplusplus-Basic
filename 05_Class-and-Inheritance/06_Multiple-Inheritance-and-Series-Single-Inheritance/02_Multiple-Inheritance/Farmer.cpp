#include <iostream>
#include "Farmer.h"
using namespace std;

Farmer::Farmer(string name){
    m_strName = name;
    cout << "Farmer(string name)" << endl;
}
Farmer::~Farmer(){
    cout << "~Farmer()" << endl;
}
void Farmer::sow(){
    cout << "Farmer -- sow()" << endl;
    cout << "Farmer: " << m_strName << endl;
}