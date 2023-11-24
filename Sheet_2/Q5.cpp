#include <iostream>
using namespace std;

// O(N)
int integerPower(int base, int exp)
{
    if (exp == 0)
        return 1;
    return base * (integerPower(base, exp - 1));
}

// O(Log (N))
int Power(int base, int exp)
{
    if (exp == 0)
        return 1;

    int ret = Power(base * base, exp / 2);
    if (exp % 2)
        ret *= base;

    return ret;
}

int main()
{
    cout << integerPower(5, 2);
    cout << Power(5, 2);
}