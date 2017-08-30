#include <iostream>

using namespace std;

int main()
{
    //This program will track the inventory of several stores selling widgets.
    int begInv,
        sold,
        store1,
        store2,
        store3;
        
    cout << "What was the beginning inventory of all of the stores?" << endl;
    cin >> begInv;

    store1 = store2 = store3 = begInv;

    cout << "How many widgets were sold at store 1?" << endl;
    cin >> sold;
    store1 -= sold;

    cout << "How many widgets were sold at store 1?" << endl;
    cin >> sold;
    store2 -= sold;

    cout << "How many widgets were sold at store 1?" << endl;
    cin >> sold;
    store3 -= sold;
    

    cout << "Store 1 has " << store1 << " widgets remaining." << endl;
    cout << "Store 2 has " << store2 << " widgets remaining." << endl;
    cout << "Store 3 has " << store3 << " widgets remaining." << endl;

    return 0;
}