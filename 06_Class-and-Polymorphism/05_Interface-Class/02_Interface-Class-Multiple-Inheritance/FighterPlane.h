#ifndef FAIGHTERPLANE_H
#define FAIGHTERPLANE_H

#include "string"
#include "Plane.h"
#include "Flyable.h"
using namespace std;

class FighterPlane: public Plane, public Flyable{
public:
    FighterPlane(string code);
    virtual void takeoff();
    virtual void land();
};

#endif