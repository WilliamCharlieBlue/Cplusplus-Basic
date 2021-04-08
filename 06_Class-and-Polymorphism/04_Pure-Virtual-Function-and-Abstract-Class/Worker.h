#ifndef WORKER_H
#define WORKER_H

#include <string>
#include "Person.h"
using namespace std;

class Worker: public Person{
public:
    Worker(string name, int age);
    virtual ~Worker(){}
//    virtual void work();

private:
    int m_iAge;
};

#endif