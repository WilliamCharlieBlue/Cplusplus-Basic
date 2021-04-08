#include <iostream>
#include "Infantry.h"
using namespace std;

void Infantry::attack() {

    m_strName = "Sam"; // Success when Infantry<-PublicSoldier<-ProtectedPerson
    cout << "Infantry: "<< m_strName << endl; // Success when Infantry<-PublicSoldier<-ProtectedPerson
    cout << "Infantry -- attack()" << endl;
}