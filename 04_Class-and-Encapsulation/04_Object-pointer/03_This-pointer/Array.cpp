#include <iostream>
#include "Array.h"
using namespace std;

Array::Array(int len){
//    m_iLen = len;
    this->len = len;
}
Array::~Array(){

}
void Array::setLen(int len){
//    m_iLen = len;
    this->len = len;
}
int Array::getLen(){
//    return m_iLen;
    return len;
}
//void Array::printInfo(){
//    //cout << m_iLen << endl;
//    cout << len << endl;
//}
//Array& Array::printInfo() {
//    cout << "len= " << len << endl;
//    return *this;
//}
Array* Array::printInfo() {
    cout << "len= " << len << endl;
    return this;
}