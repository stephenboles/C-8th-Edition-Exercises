#include <iostream>

using namespace std;

int main()
{
    double sale, tax, saleTotal;
    
    cout << "How much did you spend (ex. 365.55)" << endl;
    cin >> sale;

    cout << "How much is sales tax (ex. 9.5)?" << endl;
    cin >> tax;
    tax = tax/100;
    saleTotal = sale+(sale*tax);

    cout << "Your total bill is: $" << saleTotal;

}