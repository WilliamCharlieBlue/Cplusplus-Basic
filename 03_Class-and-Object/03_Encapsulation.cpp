#include <iostream>
#include <string>
using namespace std;

/* Target:
Define a class named Student
    1. name
    2. gender
    3. score // read only
    4. study
 */

class Student{
public:
    // set and get name
    void setName(string _name){
        m_strName = _name;
    }
    string getName(){
        return m_strName;
    }
    // set and get gender
    void setGender(string _gender){
        m_strGender = _gender;
    }
    string getGender(){
        return m_strGender;
    }
    // init, add, and get score
    int getScore(){
        return m_intScore;
    }
    void initScore(){
        m_intScore = 0;
    }
    void study(int _score){
        m_intScore += _score;
    }

private:
    string m_strName;
    string m_strGender;
    int m_intScore;
};

int main(void){
    Student stu;
    stu.initScore();
    stu.setName("Julia");
    stu.setGender("Female");
    stu.study(5);
    stu.study(3);
    stu.study(7);

    cout << stu.getName() << " " << stu.getGender() << " " << stu.getScore() << endl;
}