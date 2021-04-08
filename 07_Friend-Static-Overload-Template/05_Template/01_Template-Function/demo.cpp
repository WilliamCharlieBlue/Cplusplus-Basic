#include <iostream>
using namespace std;

/*
函数模板
    要求定义函数模板dispay()
 */

template <typename T>
void display(T a){
    cout << a << endl;
}

template <typename T, class S>
void display(T t, S s){
    cout << t << "," << s << endl;
}

template <typename T, int KSize>
void display(T a){
    for(int i=0; i<KSize; i++){
        cout << a << endl;
    }

}

int main(void){

    display<int>(10);
    display<double>(10.89);
    display<int, double>(8, 8.3);
    display<int, 5>(6);

    return 0;
}