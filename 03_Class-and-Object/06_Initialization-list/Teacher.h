#include <iostream>
#include <string>
using namespace std;

class Teacher{
public:
//    Teacher();
//    Teacher(string name, string gender, int age=20);
    Teacher(string name="Sam", string gender="NA", int age=20, int m=100);
    void setName(string _name);
    string getName();
    void setGender(string _gender);
    string getGender();
    void setAge(int _age);
    int getAge();
    int getMax();

private:
    string m_strName;
    string m_strGender;
    int m_intAge;
    const int m_intMax;
};