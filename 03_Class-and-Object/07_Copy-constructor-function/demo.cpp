//#include "Teacher.h"
#include "Teacher.cpp"
using namespace std;

/******/
/*
Teacher类：
    自定义拷贝构造函数
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
    Teacher t2=t1;
    Teacher t3(t1);
}

