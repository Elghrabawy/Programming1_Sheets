#include <iostream>
using namespace std;

// O(n)
int sumSquares_v1(int n)
{
    if (n == 0)
        return 0;
    return n * n + sumSquares_v1(n - 1);
}

// O(1)
int sumSquares_v2(int n)
{
    return (n * (n + 1) * (2 * n + 1)) / 6;
}

int main()
{

    int number;
    cout << "Enter the number : ";
    cin >> number;

    cout << "The sum squres : ";
    cout << sumSquares_v1(number) << endl;

    cout << "The sum squres : ";
    cout << sumSquares_v2(number) << endl;
}