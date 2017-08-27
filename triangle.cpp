#include <iostream> //Preprocesser directive and iostream header file for input/output 

using namespace std; //C++ uses namespaces to organize the names of program entities

int main() // Beginning of a function
{
auto one = "   *  ";
auto three = "  ***  ";
auto five = " ***** ";
auto seven = "*******";

    cout << one << endl; // Cout = Console out, endl= end line
    cout << three << endl;
    cout << five << endl;
    cout << seven << endl;
    cout << five << endl;
    cout << three << endl;
    cout << one << endl; 

    return 0; //Sends the value 0 back to the os upon program's completion.
}