#include "Person.h"

class Soldier: public Person{
public:
    Soldier(string name = "Julia", int age = 20);
    virtual ~Soldier();
    void work();

protected:
    int m_iAge;
};