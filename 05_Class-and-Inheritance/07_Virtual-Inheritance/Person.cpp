#include <iostream>
#include "Person.h"


Person::Person(string color) {
    m_strColor = color;
    cout << "Person(string color)" << endl;
}
Person::~Person(){
    cout << "~Person()" << endl;
}
void Person::printColor(){
    cout << "Person -- printColor" << endl;
    cout << m_strColor << endl;
}