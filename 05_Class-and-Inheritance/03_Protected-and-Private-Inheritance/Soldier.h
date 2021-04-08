#include "Person.h"

//class Soldier: private Person{ // Error in infantry.attack() when using m_strName in Person
class Soldier: protected Person{
public:
    Soldier();
    void work();

protected:
    int m_iAge;
};