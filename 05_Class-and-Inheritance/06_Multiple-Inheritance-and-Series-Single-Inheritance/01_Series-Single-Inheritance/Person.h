#include <string>
using namespace std;

class Person{
public:
    Person(string name="Julia");
    virtual ~Person();
    void play();

protected:
    string m_strName;
};