#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    // Open the file
    ifstream inFile("Numbers.txt");
    int value1, value2, value3, sum;

    // Read the three numbers from the file.
    inFile >> value1;
    inFile >> value2;
    inFile >> value3;

    inFile.close();

    // Calculate the sum of the numbers.
    sum = value1 + value2 + value3;

    // Display the three numbers.
    cout << "Here are the numbers:\n"
         << value1 << " " << value2
         << " " << value3 << endl;

    // Display the sum of the numbers.
    cout << "Their sum is: " << sum << endl;
    return 0;

}