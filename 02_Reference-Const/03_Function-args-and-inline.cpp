#include <iostream>
using namespace std;

// arguments with default value should be right
void fun(int i, int j=5, int k=10);

void fun(int i, int j, int k){
    cout << i << j << k << endl;
}

inline int max(int a, int b, int c);
int max(int a, int b, int c){
    if(b>a) a=b;
    if(c>a) a=c;
    return a;
}

int main(void){
    cout << "******Functions args******" << endl;
    fun(20);
    fun(20,30);
    fun(20,30,40);

    cout << "******inline******" << endl;
    int i = 10, j = 20, k =30, m;
    int a,b,c;
    m = max(i,j,k);
// Expansion of the inline function
//    a=i;b=j;c=k;
//    if(b>a) a=b;
//    if(c>a) a=c;
//    m=a;
    cout << "Max="<<m<<endl;

    return 0;
}