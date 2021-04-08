#include "Teacher.h"

using namespace std;
////without args
//Teacher::Teacher(){
//    m_strName = "hello";
//    m_strGender = "NA";
//    m_intAge = 18;
//    cout << "Teacher()" << endl;
//}

////with args
//Teacher::Teacher(string _name, string _gender, int _age){
//    m_strName = _name;
//    m_strGender = _gender;
//    m_intAge = _age;
//    cout << "Teacher(string _name, string _gender, int _age)" << endl;
//}

// initialization list
Teacher::Teacher(string name, string gender, int age, int m):m_strName(name),m_strGender(gender),m_intAge(age),m_intMax(m) {
    cout << "Teacher(string name, string gender, int age):m_strName(name),m_strGender(gender),m_intAge(age)" << endl;
}

void Teacher::setName(string name){
    m_strName = name;
}
string Teacher::getName(){
    return m_strName;
}
void Teacher::setGender(string gender){
    m_strGender = gender;
}
string Teacher::getGender(){
    return m_strGender;
}
void Teacher::setAge(int age){
    m_intAge = age;
}
int Teacher::getAge(){
    return m_intAge;
}
int Teacher::getMax() {
    return m_intMax;
}

