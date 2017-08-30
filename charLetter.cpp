#include <iostream>
using namespace std;
int main()
{
    char letter;

    cout << "Please enter a letter: " << endl;

    cin >> letter;

    cout << static_cast<int>(letter) << endl;
    return 0;
}