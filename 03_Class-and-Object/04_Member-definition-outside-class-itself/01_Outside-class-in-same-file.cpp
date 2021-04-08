#include <iostream>
#include <string>
using namespace std;

/* Target:
    Define a class Teacher
    1.member
        name
        age
        gender
    2.functions
        set and get
        tech
*/

class Teacher{
public:
    void setName(string _name);
    string getName();
    void setGender(string _gender);
    string getGender();
    void setAge(int _age);
    int getAge();
    void tech();

private:
    string m_strName;
    string m_strGender;
    int m_intAge;
};

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