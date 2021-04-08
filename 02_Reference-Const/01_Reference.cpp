#include <iostream>
using namespace std;

int main(void){

    int a = 10;
    cout<<"int a = 10;: "<<a<<endl;
    int &b = a; // do the initialization before the Reference

    b = 30;
    cout<<"int &b = a;b = 30;: "<<a<<endl;
}