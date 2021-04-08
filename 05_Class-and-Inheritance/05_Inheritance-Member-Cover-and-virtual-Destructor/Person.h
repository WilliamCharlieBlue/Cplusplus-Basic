#include <string>
using namespace std;

class Person{
public:
    Person(string name = "Merry");
    virtual ~Person();
    void play();

protected:
    string m_strName;
};