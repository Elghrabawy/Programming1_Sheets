#include <iostream>
using namespace std;

int raiseIntToPower(int n, int k)
{
    if (k == 0)
        return 1;
    return n * (raiseIntToPower(n, k - 1));
}

int main()
{
    int base, exp;

    cout << "Enter base and exponintion integers : ";

    cin >> base >> exp;

    cout << raiseIntToPower(base, exp);
}