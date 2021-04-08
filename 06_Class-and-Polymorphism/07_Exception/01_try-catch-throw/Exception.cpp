#include <iostream>
#include "Exception.h"
using namespace std;

void Exception::printException() {
    cout << "Exception -> printException" << endl;
}

Exception::~Exception() {
    cout << "~Exception()" << endl;
}
