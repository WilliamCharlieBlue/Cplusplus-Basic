#include <iostream>
#include "Plane.h"

Plane::Plane(string code) {
    m_strCode = code;
}

void Plane::printCode() {
    cout << "Plane: " << m_strCode << endl;
}