#include <iostream>
//#include "Person.h"
#include "Worker.h"
using namespace std;

/*继承
 定义Person类：
    m_strName, m_iAge
    构造函数，析构函数，eat函数
 定义Worker类：
    公有继承Person类
    m_iSalary
    构造函数，析构函数，work函数
 */

int main(void){
//    Worker *p = new Worker();
//    p->m_strName = "Julia";p->m_iAge = 25;p->eat();
//    p->m_iSalary = 10000;p->work();
//    cout << p->m_strName << ":" << p->m_iAge << ":" << p->m_iSalary << endl;
//    delete p;p = NULL;

//    Worker worker;
//    worker.m_strName = "Julia";
//    worker.m_iAge = 25;
//    worker.eat();
//    worker.m_iSalary = 10000;
//    worker.work();

//  //
//    Person person;
//    person.eat();
//    //person.m_strName = "Merry"; // cannot access protected member
//    //person.m_iAge = 18; // cannot access private member


    Worker worker;
    //worker.m_strName = "Julia"; // Error because m_strName is protected in Person
    //worker.m_iAge = 25; // Error because m_iAge is private in Person
    worker.eat(); // Success because m_strName and m_iAge are used in Person, though they are protected and private
    worker.m_iSalary = 10000;
    worker.work(); // Success because m_strName is used in Worker and m_strName is protected in Person

    return 0;
}