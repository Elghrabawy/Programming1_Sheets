#include <iostream>
using namespace std;

int reverse_number(int n)
{
    int rev = 0;

    while (n)
    {
        rev = rev * 10 + n % 10;
        n /= 10;
    }

    return rev;
}
int main()
{
    int n = 547689;

    cout << reverse_number(n);
}