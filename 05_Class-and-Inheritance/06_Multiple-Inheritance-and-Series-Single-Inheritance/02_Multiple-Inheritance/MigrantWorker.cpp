#include <iostream>
#include "MigrantWorker.h"
using namespace std;

MigrantWorker::MigrantWorker(string name, string code):Farmer(name),Worker(code){
    cout << "MigrantWorker(string name, string code):Farmer(name),Worker(code)" << endl;
}

MigrantWorker::~MigrantWorker(){
    cout << "~MigrantWorker()" << endl;
}