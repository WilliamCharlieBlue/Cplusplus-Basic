#include <iostream>
#include "Coordinate.cpp"
using namespace std;
/*对象数组
    定义Coordinate类
    数据成员：m_iX 和 m_iY
    分别从栈和堆中实例化长度为3的对象数组
    给数组中的元素分别赋值
    遍历两个数据
 * */

int main(void){

    Coordinate coor[3];
    coor[0].m_iX = 3;
    coor[0].m_iY = 5;
    coor[1].m_iX = 1;
    coor[1].m_iY = -1;
//    coor[2].m_iX = -3;
//    coor[2].m_iY = -5;

    Coordinate *p = new Coordinate[3];
    p->m_iX = 7;
    p[0].m_iY = 9;

    // 只要p出现变动后，位置变动了，p[0]指向的对象也不一样了
    p++; // p=p+1; // p+=1;
    // 此时p已经指向了第二个对象
    p->m_iX = 11;
    p[0].m_iY = 13;
    // 第二个对象的下一个对象为第三个对象，对第三个对象的Y进行赋值
    p[1].m_iX = 15;
    // p再+1后，现在指向第三个对象了
    p++;
    p->m_iY = 17;

    // 对栈实例化的对象数组进行遍历
    for(int i=0; i<3; i++){
        cout << "coor_x: " << coor[i].m_iX << endl;
        cout << "coor_y: " << coor[i].m_iY << endl;
    }

    for(int j=0; j<3; j++){
        cout << "p_x: " << p->m_iX << endl;
        cout << "p_y: " << p->m_iY << endl;
        // 从最大的索引开始往后遍历
        p--;
    }
    // 最后一个循环后，p指向了一个非法的位置，此时不能直接delete，要先加回来再释放
    p++;
    delete []p;
    p = NULL;

    return 0;
}