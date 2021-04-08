#include <iostream>
#include "IndexException.h"
using namespace std;

/*
异常处理
    Exception类
        析构函数，printException
    IndexException类
        printException
 */

void test()
{
    //throw 1;
    //throw 0.1;
    throw IndexException();
}


int main(void){
    try {
        test();
    }
    catch (int) {
        cout << "exception" << endl; // throw的int类型的值，被catch到了
    }
    catch (double &e) {
        cout << e << endl;  // throw的double类型的值，被catch到了，用e来接收
    }
    catch (IndexException &e) {
    //catch (Exception &e) { // 使用基类的Exception，也是可以捕获到IndexException的异常的
            e.printException(); // throw的IndexException类型的对象，被catch到了，用e来接收; 而IndexException是自带打印函数的
    }
//    catch (...) {  // 实在走投无路时选择的办法，但是无法像IndexException和Exception那样，展示异常的具体细节
//        cout << "... type Exception" << endl;
//    }

    return 0;
}