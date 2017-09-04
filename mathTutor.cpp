#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>

using namespace std;

int main()
{   
    
    // Get the system time.
    unsigned seed = time(0);

    // Seed the random number generator.
    srand(seed);

    const int maxValue = 999;
    const int minValue = 100;
    int value1 = (rand() % (maxValue - minValue + 1)) + minValue;
    int value2 = (rand() % (maxValue - minValue + 1)) + minValue;

    cout << "Solve the following equation.  When ready to check your answer,\n"
         << "press the [Enter] button.\n"
         << endl;
    cout << setw(5) << value1 << endl;
    cout << "+" << setw(4) << value2 << endl;
    cout << "-----";
    cin.get();
    
    cout << setw(5) << value1 + value2 << endl;
    cout << endl;
    cout << "Did you get it right?";

    return 0;


}