#include <iostream>
#include "Dustman.h"
using namespace std;


Dustman::Dustman(string name, int age): Worker(name, age){

}

void Dustman::work() {
    cout << "Dustman - > work() - > sweeping" << endl;
}