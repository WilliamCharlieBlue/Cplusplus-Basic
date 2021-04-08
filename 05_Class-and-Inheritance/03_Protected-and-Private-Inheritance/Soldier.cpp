#include <iostream>
#include "Soldier.h"
using namespace std;

Soldier::Soldier() {

}
void Soldier::work(){
    m_strName = "Charlie";
    m_iAge = 20;
    cout << "Soldier: " << m_strName << endl;
    cout << "Soldier: " << m_iAge << endl;
    cout << "Soldier -- work()" << endl;
}