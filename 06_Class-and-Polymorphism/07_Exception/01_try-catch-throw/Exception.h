#ifndef EXCEPTION_H
#define EXCEPTION_H

#include <string>
using namespace std;

class Exception{
public:
    virtual void printException();
    virtual ~Exception();
};

#endif