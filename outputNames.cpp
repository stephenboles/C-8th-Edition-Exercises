// Include appropriate header files
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()

{
    // Open file for output
    ofstream outputfile("Names.txt");

    // Declare variables
    string name1, name2, name3;

    // Request user to provide a name
    cout << "Give me a name.\n";
    cin >> name1;

    cout << "Give me another name.\n";
    cin >> name2;

    cout << "Give me a name.\n";
    cin >> name3;

    // Feed names to output file
    outputfile << name1 << endl;
    outputfile << name2 << endl;
    outputfile << name3 << endl;

    outputfile.close();
    return 0;
}