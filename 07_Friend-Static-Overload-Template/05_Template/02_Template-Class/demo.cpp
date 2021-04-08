#include <iostream>
#include "MyArray.h"
using namespace std;

/*
类模板
    定义类模板MyArray
        m_pArr
        构造函数，析构函数，display()
 */

int main(void){

    MyArray<int, 5, 6> arr;
    arr.display();
    return 0;
}