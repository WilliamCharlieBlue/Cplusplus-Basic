#include <iostream>
using namespace std;

int main(void){
//    int *p = new int(20); // initialization when doing memory allocation
    int *p1 = new int;
    if(NULL == p1){
        return 0;
    }
    *p1 = 20;
    cout<< *p1 <<endl;
    delete p1;
    p1 = NULL;

    int *p2 = new int[1000];
    if(NULL == p2){
        return 0;
    }

    p2[0] = 10;
    p2[1] = 20;
    cout<<p2[0]<<","<<p2[1]<<endl;
//    delete p2; //Only delete the first 1 of the 1000 in this way
    delete []p2;
    p2 = NULL;

    return 0;
}