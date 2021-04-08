#include <iostream>
#include "Array.h"
using namespace std;

/*
 定义一个Array类
 数据成员；m_iCount
 成员函数：构造函数，拷贝构造函数，析构函数，数据封装函数

 增加数据成员m_pArr, 并增加m_pArr地址产看函数
 改造 构造函数、拷贝构造函数和析构函数
 */

int main(void){
    Array arr1(10);

    Array arr2(arr1);

    arr1.printAddr();
    arr2.printAddr();

    arr1.printArr();
    arr2.printArr();

    return 0;
}