#include <iostream>
#include "Worker.h"
using namespace std;

Worker::Worker(){
    cout << "Worker()" << endl;
}
Worker::~Worker(){
    cout << "~Worker()" << endl;
}
void Worker::work(){
    m_strName = "Sam"; // m_strName is protected in Person
    // m_iAge = 50; // Error because m_iAge is private in Person
    cout << "work()" << endl;
}
