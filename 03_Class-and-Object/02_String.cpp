#include <iostream>
#include <string>
using namespace std;


/*Target:
    1. remind user to input a name
    2. get the given name
    3. say hello to user
    4. reply the name length
    5. reply the first letter of user name
    6. remind user when get empty name
    7. remind user when get "admin"
 */

int main(void){
    string name;
    cout << "Please input your name: ";
    getline(cin, name);
    if(name.empty()){
        cout << "input is empty.." << endl;
        system("pause");
        return 0;
    }
    if(name == "admin"){
        cout << endl << "Warning! You are using administrator" << endl;
    }
    cout << "hello " + name << endl;
    cout << "your name length: " << name.length() << endl;
    cout << "your name first letter is: "<<name[0] << endl;

    return 0;
}