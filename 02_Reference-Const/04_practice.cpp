#include <iostream>
using namespace std;

void fun(int i=30, int j=20, int k=10);
void fun(double i, double j);
//inline is just a building type, doesn't influence the result
//inline void fun(int i=30, int j=20, int k=10);
//inline void fun(double i, double j);

int main(void){

    fun();
    fun(1, 2);
    fun(1.1, 2.2);

}

void fun(int i, int j, int k){
    cout<<"Int "<<i<<","<<j<<","<<k<<endl;
}

void fun(double i, double j){
    cout<<"Double "<<i<<","<<j<<endl;
}