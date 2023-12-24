#include <iostream>
using namespace std;

void digitChar(int number)
{
    int zeros = 0, evens = 0, odds = 0;

    while (number)
    {
        int curDigit = number % 10;

        if (curDigit == 0)
            zeros++;
        if (curDigit % 2 == 0)
            evens++;
        if (curDigit % 2 == 1)
            odds++;

        number /= 10;
    }

    cout << "The number of zero digits : " << zeros << endl;
    cout << "The number of even digits : " << evens << endl;
    cout << "The number of odd digits  : " << odds << endl;
}

int main()
{
    int number;
    cout << "Enter the number : ";
    cin >> number;

    digitChar(number);
}