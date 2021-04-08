#include "Soldier.h"

class Infantry: public Soldier{
public:
    Infantry(string name="Merry", int age=18);
    virtual ~Infantry();
    void attack();
};