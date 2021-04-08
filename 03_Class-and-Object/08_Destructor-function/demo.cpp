//#include "Teacher.h"
#include "Teacher.cpp"
using namespace std;

/******/
/*
Teacher类：
    1.自定义析构函数。
    2.普通方式实例化的对象，在销毁对象时是否自动调用析构函数
    3.通过拷贝构造函数实例化对象，在销毁对象时是否自动调用析构函数
数据：
    名字
    年龄
成员函数：
    数据成员的封装函数
 */

int main(void){
//    // instantiation without args
//    Teacher t1;
//    cout << t1.getName() << " "<< t1.getGender() <<" " << t1.getAge() <<endl;
//    // instantiation with args
//    Teacher t2("Julia","Female");
//    cout << t2.getName() << " "<< t2.getGender() <<" " << t2.getAge() <<endl;
//    // age is default value
//    Teacher t3("Charlie","Male",16);
//    cout << t3.getName() << " "<< t3.getGender() <<" " << t3.getAge() <<endl;
//
//    Teacher t4("Charlie","Male",16,150);
//    cout << t4.getName() << " "<< t4.getGender() <<" " << t4.getAge() << " " << t4.getMax() <<endl;

    Teacher t1;
    cout << "Heap initialization start" << endl;
    Teacher *p = new Teacher();
    delete p;
    cout << "Heap initialization end" << endl;

    Teacher t2=t1;
    Teacher t3(t1);



    system("pause");
}

