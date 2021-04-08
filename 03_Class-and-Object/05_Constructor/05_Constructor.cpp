#include <iostream>
#include <string>
#include "05_Constructor.h"

using namespace std;

Teacher::Teacher(){
    m_strName = "hello";
    m_strGender = "NA";
    m_intAge = 18;
    cout << "Teacher()" << endl;
}

Teacher::Teacher(string _name, string _gender, int _age){
    m_strName = _name;
    m_strGender = _gender;
    m_intAge = _age;
    cout << "Teacher(string _name, string _gender, int _age)" << endl;
}

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
