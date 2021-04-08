#include <iostream>
#include "Array.h"
using namespace std;

Array::Array() {
    cout << "Array()" << endl;
}

Array::Array(const Array &arr){
    cout << "Array(const Array &arr)" << endl;
}
Array::~Array(){
    cout << "~Array()" << endl;
}
void Array::setCount(int count){
    m_iCount = count;
}
int Array::getCount(){
    return m_iCount;
}