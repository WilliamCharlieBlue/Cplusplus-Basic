#include <iostream>
#include "Person.h"
using namespace std;

Person::Person() {
    m_strName = "Julia";
}

void Person::play() {
    cout << "Person -- play()" << endl;
    cout << "Person: " << m_strName << endl;
}

