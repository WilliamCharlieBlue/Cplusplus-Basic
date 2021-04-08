#include <iostream>
using namespace std;

void fun1(int &a, int &b);
void fun2(const int &a, const int &b);

int main(void){

    cout << "******Const******" << endl;
    const int a = 123;
//    a = 456; // error when a new value is given to a

    cout << "******Points******" << endl;
    int x = 3;
    int y = 5;
    cout << "The value of x is " << x << endl;
    cout << "The value of y is " << y << endl;

    int const *p1 = &x; // equal to  const int *p1 = &x;
//    *p1 = 100; // error when a new value is given to *p1
    cout << "*p1 = &x:The value of *p1 is " << *p1 << endl;
    p1 = &y; // p1 is free to another address.
    cout << "p1 = &y:The value of *p1 is " << *p1 << endl;

    cout << "******Reference******" << endl;
    int c = 3;
    int d = 5;
    int &e = c;
    int const &f = d;
    cout << "The value of c is " << c << endl;
    cout << "The value of d is " << d << endl;
    e = 6;
    cout << "int &e = c; e = 10;:The value of c is " << c << endl;
//    f = 10; //error when a new value is given to const &f

    cout << "******Functions******" << endl;
    int i = 1;
    int j = 2;
    cout << "The value of i is " << i << endl;
    cout << "The value of j is " << j << endl;
    fun1(i, j);
    cout <<"fun1::a = 10;b = 20; : i is "<< i << "; j is "<< j << endl;
//    fun1(i, j); // error when building
//    cout <<"fun2::a = 10;b = 20; : i is "<< i << "; j is "<< j << endl;

}

void fun1(int &a, int &b){
    a = 10;
    b = 20;
}

//void fun2(const int &a, const int &b){ // error when a new value is given to const &a and const &b
//    a = 10;
//    b = 20;
//}