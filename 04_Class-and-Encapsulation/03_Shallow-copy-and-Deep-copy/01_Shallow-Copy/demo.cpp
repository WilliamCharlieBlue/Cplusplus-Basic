#include <iostream>
#include "Array.h"
using namespace std;

/*
 定义一个Array类
 数据成员；m_iCount
 成员函数：构造函数，拷贝构造函数，析构函数，数据封装函数

 */

int main(void){
    Array arr1;
    arr1.setCount(100);

    Array arr2(arr1);

    cout << "arr1: " << arr1.getCount() << endl;
    cout << "arr2: " << arr2.getCount() << endl;

    return 0;
}