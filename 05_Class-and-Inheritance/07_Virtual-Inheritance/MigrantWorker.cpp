#include <iostream>
#include "MigrantWorker.h"
using namespace std;

MigrantWorker::MigrantWorker(string name, string code, string color):Farmer(name,color),Worker(code,color){
    cout << "MigrantWorker(string name, string code, string color):Farmer(name,color),Worker(code,color)" << endl;
}

MigrantWorker::~MigrantWorker(){
    cout << "~MigrantWorker()" << endl;
}