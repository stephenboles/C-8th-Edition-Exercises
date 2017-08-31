#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    unsigned seed = time(0);
    srand(seed);

    const int MIN_VALUE = 1;
    const int MAX_VALUE = 6;
    int y = (rand() % (MAX_VALUE - MIN_VALUE + 1)) + MIN_VALUE;
    int x = (rand() % (MAX_VALUE - MIN_VALUE + 1)) + MIN_VALUE;
    
    cout << rand() << endl;
    cout << "Your two random numbers are " << x << " and " << y << ".";

    return 0;

}