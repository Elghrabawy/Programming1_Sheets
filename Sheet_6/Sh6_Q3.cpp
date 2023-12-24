#include <iostream>
#include <cmath>
using namespace std;

int random_generator()
{
    return rand() % 90 + 10;
}

int double_num(int num)
{
    return 2 * num;
}

int reverse_num(int num)
{
    int rev = 0;
    while (num)
    {
        rev = rev * 10 + num % 10;
        num /= 10;
    }

    return rev;
}

int digit_sum(int num)
{
    int sum = 0;
    while (num)
    {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

int ran_pow(int num)
{
    int exp = rand() % 3 + 2;

    return pow(num, exp);
}

int menu()
{
    cout << "Choose operation:\n";
    cout << "1 - Double the number.\n";
    cout << "2 - Reverse the Digits of number.\n";
    cout << "3 - Raise the number to power of 2, 3 or 4.\n";
    cout << "4 - Sum the digits of the number.\n";

    int choice;
    cout << "Enter number between (1 - 4) : ";

    cin >> choice;
    if (choice < 1 || choice > 4)
    {
        cout << "Invalid Input:(";
        exit(0);
    }
    else
    {
        return choice;
    }
}

int main()
{
    int num = random_generator();
    cout << "The random number is : " << num << '.' << endl;

    int ch = menu();

    switch (ch)
    {
    case 1:
        cout << "The double of " << num << " is " << double_num(num);
        break;
    case 2:
        cout << "The reverse digits of " << num << " is " << reverse_num(num);
        break;
    case 3:
        cout << "The number " << num << " power random (2, 3, 4) is " << ran_pow(num);
        break;
    case 4:
        cout << "the sum of the " << num << " digits is " << digit_sum(num);
        break;
    }
}