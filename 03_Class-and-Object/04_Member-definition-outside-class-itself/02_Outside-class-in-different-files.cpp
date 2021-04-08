#include <iostream>
#include <string>
#include "02_Outside-class-in-different-files.h"
using namespace std;

void Teacher::setName(string _name){
    m_strName = _name;
}
string Teacher::getName(){
    return m_strName;
}
void Teacher::setGender(string _gender){
    m_strGender = _gender;
}
string Teacher::getGender(){
    return m_strGender;
}
void Teacher::setAge(int _age){
    m_intAge = _age;
}
int Teacher::getAge(){
    return m_intAge;
}

void Teacher::tech(){
    cout << "It is class time!" << endl;
}


int main(void){
    Teacher t;
    t.setName("Charlie");
    t.setGender("Male");
    t.setAge(25);
    cout << t.getName() <<" "<< t.getGender() <<" "<< t.getAge() <<" "<<endl;
    t.tech();
    return 0;
}