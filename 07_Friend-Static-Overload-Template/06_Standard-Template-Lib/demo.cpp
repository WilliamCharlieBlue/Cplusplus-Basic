#include <iostream>
#include <vector>
#include <list>
#include <map>
using namespace std;

/*
通过使用标准模板库，学习其用法
 */

int main(void){
    cout<< endl << "#######vector#######" << endl << endl;
    vector<int> vec;
    vec.push_back(3);
    vec.push_back(4);
    vec.push_back(5);
    vec.push_back(6);
    cout << "vec.size(): " << vec.size() << endl;
    vec.pop_back();
    cout << "vec.size(): " << vec.size() << endl;
    cout << "#######vector display with index#########" << endl;
    for(int i=0; i<vec.size(); i++){
        cout << vec[i] << endl;
    }
    cout << "#######vector display with iterator #########" << endl;
    vector<int>::iterator viter = vec.begin();
    for( ; viter!=vec.end(); viter++){
        cout << *viter << endl;
    }

    cout << "vec.front(): " << vec.front() << endl;
    cout << "vec.back(): " << vec.back() << endl;

    cout << endl << "#######list#######" << endl << endl;
    list<int> list1;
    list1.push_back(4);
    list1.push_back(7);
    list1.push_back(10);
    cout << "#######list display with iterator #########" << endl;
    list<int>::iterator liter = list1.begin();
    for( ; liter!=list1.end(); liter++){
        cout << *liter << endl;
    }

    cout << endl << "#######map#######" << endl << endl;
//    map<int, string> m;
//    pair<int, string> p1(3, "hello");
//    pair<int, string> p2(6, "world");
//    pair<int, string> p3(8, "Hangzhou");
    map<string, string> m;
    pair<string, string> p1("H", "hello");
    pair<string, string> p2("W", "world");
    pair<string, string> p3("H", "Hangzhou");
    m.insert(p1);
    m.insert(p2);
    cout << "#######map display with indel #########" << endl;
//    cout << m[3] << endl;
//    cout << m[6] << endl;
    cout << m["H"] << endl;
    cout << m["W"] << endl;
    cout << "#######map display with iterator #########" << endl;
//    map<int,string>::iterator miter = m.begin();
//    for( ; miter!=m.end(); miter++){
//        //cout << *miter << endl; // Error becasue miter points to a key-value
//        cout << miter->first << endl;
//        cout << miter->second << endl;
//    }
    map<string,string>::iterator miter = m.begin();
    for( ; miter!=m.end(); miter++) {
        //cout << *miter << endl; // Error becasue miter points to a key-value
        cout << miter->first << endl;
        cout << miter->second << endl;
    }
}