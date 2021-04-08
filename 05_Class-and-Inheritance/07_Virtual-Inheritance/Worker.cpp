#include <iostream>
#include "Worker.h"
using namespace std;

Worker::Worker(string code, string color):Person("Worker "+color){
    m_strCode = code;
    cout << "Worker(string code, string color):Person(color)" << endl;
}
Worker::~Worker(){
    cout << "~Worker()" << endl;
}
void Worker::carry(){
    cout << "Worker -- carry()" << endl;
    cout << "Worker: " << m_strCode << endl;
}