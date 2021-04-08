#include <iostream>
#include "Worker.h"
using namespace std;

Worker::Worker(string code){
    m_strCode = code;
    cout << "Worker(string code)" << endl;
}
Worker::~Worker(){
    cout << "~Worker()" << endl;
}
void Worker::carry(){
    cout << "Worker -- carry()" << endl;
    cout << "Worker: " << m_strCode << endl;
}