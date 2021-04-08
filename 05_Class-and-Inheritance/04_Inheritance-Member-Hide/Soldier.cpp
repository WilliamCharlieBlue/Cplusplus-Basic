#include <iostream>
#include "Soldier.h"
using namespace std;

Soldier::Soldier() {

}

void Soldier::play() {
    cout << "Soldier -- play()" << endl;
    cout << "Soldier::m_strName: "<< m_strName << endl;
    cout << "Person::m_strName: "<< Person::m_strName << endl;
}

void Soldier::work(){
    m_strName = "Charlie";
    Person::m_strName = "Merry";

    m_iAge = 20;
    //cout << "Soldier: " << m_strName << endl;
    cout << "Soldier: " << m_iAge << endl;
    cout << "Soldier -- work()" << endl;
}