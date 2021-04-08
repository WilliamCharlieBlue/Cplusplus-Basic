#include <iostream>
#include "Plane.h"

Plane::Plane(string code) {
    m_strCode = code;
}

void Plane::takeoff() {
    cout << "Plane -> takeoff()" << endl;
}

void Plane::land() {
    cout << "Plane -> land()" << endl;
}

void Plane::printCode() {
    cout << "Plane: " << m_strCode << endl;
}