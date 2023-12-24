#include <iostream>
#include <algorithm>
using namespace std;

struct fraction
{
    int numerator, denominator;

    void print()
    {
        cout << numerator << " / " << denominator;
    }

    string value()
    {
        return (to_string(numerator) + " / " + to_string(denominator));
    }

    void set()
    {
        cout << "Enter the numerator : ";
        cin >> numerator;

        cout << "Enter the denominator : ";
        cin >> denominator;
    }

    void input()
    {
        char divMark;
        cin >> numerator >> divMark >> denominator;
    }
};

int menu()
{
    cout << "Select the Operation..\n";

    cout << "1 - Add Fractions\n";
    cout << "2 - Substract Fractions\n";
    cout << "3 - Multiply Fractions\n";

    int choice;
    cin >> choice;

    if (choice < 1 || choice > 3)
    {
        cout << "Invalid Input.";
        exit(0);
    }
    return choice;
}

fraction addFractions(fraction f1, fraction f2)
{
    fraction result;

    result.numerator = f1.numerator * f2.denominator + f2.numerator * f1.denominator;
    result.denominator = f1.denominator * f2.denominator;

    int GCD = __gcd(result.numerator, result.denominator);

    result.numerator /= GCD;
    result.denominator /= GCD;

    return result;
}

fraction substractFractions(fraction f1, fraction f2)
{
    fraction result;

    result.numerator = f1.numerator * f2.denominator - f2.numerator * f1.denominator;
    result.denominator = f1.denominator * f2.denominator;

    int GCD = __gcd(abs(result.numerator), abs(result.denominator));

    result.numerator /= GCD;
    result.denominator /= GCD;

    return result;
}

fraction multiplyFractions(fraction f1, fraction f2)
{
    fraction result;

    result.numerator = f1.numerator * f2.numerator;
    result.denominator = f1.denominator * f2.denominator;

    int GCD = __gcd(result.numerator, result.denominator);

    result.numerator /= GCD;
    result.denominator /= GCD;

    return result;
}
int main()
{

    int choice = menu();

    fraction a, b, result;

    cout << "Input value using this format (a / b).\n\n";

    cout << "Enter values of A fraction : ";
    a.input();

    cout << "Enter values of B fraction : ";
    b.input();
    cout << endl;

    switch (choice)
    {
    case 1:
        result = addFractions(a, b);
        cout << a.value() << " + " << b.value() << " = " << result.value();
        break;
    case 2:
        result = substractFractions(a, b);
        cout << a.value() << " - " << b.value() << " = " << result.value();
        break;
    case 3:
        result = multiplyFractions(a, b);
        cout << a.value() << " * " << b.value() << " = " << result.value();
        break;
    }
}