#include <iostream>
#include <math.h>
using namespace std;

int sumFirstLastDigits_v1(int number)
{
    int digits, firstDigit, lastDigit;

    // count the number of digits in the number.
    digits = log10(number) + 1;

    // first digit = number / 10 ^ (digits - 1).
    firstDigit = number / pow(10, digits - 1);

    // last digit = number modules 10.
    lastDigit = number % 10;

    return firstDigit + lastDigit;
}

int sumFirstLastDigits_v2(int number)
{
    int firstDigit, lastDigit;

    // last digit of number = number modules 10.
    lastDigit = number % 10;

    // divide number by 10 to be only 1 digits .. this digit is the first digit.
    while (number > 9)
    {
        number /= 10;
    }
    firstDigit = number;

    return firstDigit + lastDigit;
}

int sumFirstLastDigits_v3(int number)
{
    int firstDigit, lastDigit;

    // convert number from int to string.
    string strNumber = to_string(number);

    // first digit = vlaue of first index in strNumber - 48 .. to convert digit from char to int
    firstDigit = strNumber[0] - '0';

    // last digit = value of last index in strNumber - 48 >> to convert digit from char to int
    lastDigit = strNumber[strNumber.length() - 1] - '0';

    return firstDigit + lastDigit;
}

int main()
{
    int number;
    cout << "Enter the number : ";
    cin >> number;

    cout << "Sum of first and last digit v1 : ";
    cout << sumFirstLastDigits_v1(number) << endl;

    cout << "Sum of first and last digit v2 : ";
    cout << sumFirstLastDigits_v2(number) << endl;

    cout << "Sum of first and last digit v3 : ";
    cout << sumFirstLastDigits_v3(number) << endl;
}