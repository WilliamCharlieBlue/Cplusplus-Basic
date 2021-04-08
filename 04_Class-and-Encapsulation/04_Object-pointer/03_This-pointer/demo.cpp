#include <iostream>
#include "Array.h"
using namespace std;

/*
 定义一个Array类
    数据成员： m_iLen
    成员函数：构造函数，析构函数，len的封装函数，信息输出函数printInfo
 */

int main(void){

    Array arr1(10);
    cout << "arr1.getLen(): " << arr1.getLen() << endl;
//    arr1.printInfo();
//    arr1.printInfo().setLen(5);  // Array& Array::printInfo(){ return *this}
    arr1.printInfo()->setLen(5);  // Array* Array::printInfo(){ return this}
    cout << "arr1.printInfo().setLen(5):len= " << arr1.getLen() << endl;
    return 0;
}