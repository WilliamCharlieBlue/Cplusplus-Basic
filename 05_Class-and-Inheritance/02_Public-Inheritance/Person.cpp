#include <iostream>
#include "Person.h"
using namespace std;

Person::Person(){
    cout << "Person()" << endl;
}
Person::~Person(){
    cout << "~Person()" << endl;
}
void Person::eat(){
    m_strName = "Charlie";
    m_iAge = 25;
    cout << "eating()" << endl;
}
