//#include "05_Constructor.h"
#include "05_Constructor.cpp"
using namespace std;

int main(void){
    // instantiation with args
    Teacher t1;
    cout << t1.getName() << " "<< t1.getGender() <<" " << t1.getAge() <<endl;
    // instantiation without args
    Teacher t2("Julia","Female",16);
    cout << t2.getName() << " "<< t2.getGender() <<" " << t2.getAge() <<endl;
    // age is default value
    Teacher t3("Charlie","Male");
    cout << t3.getName() << " "<< t3.getGender() <<" " << t3.getAge() <<endl;
}

