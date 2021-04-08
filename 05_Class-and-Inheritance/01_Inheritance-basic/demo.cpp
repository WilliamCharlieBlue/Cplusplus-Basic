#include <iostream>
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

    Worker *p = new Worker();

    p->m_strName = "Julia";
    p->m_iAge = 25;
    p->eat();
    p->m_iSalary = 10000;
    p->work();
    cout << p->m_strName << ":" << p->m_iAge << ":" << p->m_iSalary << endl;

    delete p;
    p = NULL;

    return 0;
}