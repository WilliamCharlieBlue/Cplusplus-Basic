#include "Circle.h"

Circle::Circle(int x, int y, double r) {
    cout << "Circle(int x, int y, double r)" << endl;
    m_pCenter = new Coordinate(x, y);
    m_dR = r;
}

Circle::~Circle() {
    cout << "~Circle()" << endl;
}

double Circle::calcArea() {
    cout << "Circle -> calcArea()" << endl;
    return 3.24 * m_dR * m_dR;
}