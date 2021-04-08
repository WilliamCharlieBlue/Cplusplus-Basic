#include "Person.h"

//class Soldier: private Person{ // Error in infantry.attack() when using m_strName in Person
//class Soldier: protected Person{
class Soldier: public Person{
public:
    Soldier(string name="Charlie", int age=20);
    virtual ~Soldier();
    void work();

protected:
    int m_iAge;
};