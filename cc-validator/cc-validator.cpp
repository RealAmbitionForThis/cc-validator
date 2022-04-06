#include <stdio.h>
#include <iostream>
#include <string>

using namespace std;

string creditCardNumber;    
int doubled = 0;
bool smd;

void DoubleEverySecond(int l)
{
    for (int i = l - 1; i >= 0; i--) {

        int d = creditCardNumber[i] - '0';

        if (smd == true)
            d = d * 2;

        doubled += d / 10;
        smd = !smd;
    }
}

int main() 
{
    cout << "Credit Card Number: ";
    cin >> creditCardNumber;

    int l = creditCardNumber.length();

    DoubleEverySecond(l);

    for (int i = l - 1; i >= 0; i = i - 2) {
        doubled += (creditCardNumber[i] - 48);
    }

    if (doubled % 10 == 0)
        cout << "Valid\n";
    else
        cout << "Invalid\n";
}