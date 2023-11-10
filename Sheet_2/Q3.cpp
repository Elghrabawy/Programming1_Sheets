#include <iostream>
using namespace std;

int main()
{
    int num1, num2, num3;
    cin >> num1 >> num2 >> num3;

    int theSmallest;

    if (num1 < num2)
    {
        if (num1 <= num3)
        {
            theSmallest = num1;
        }
        else
        {
            theSmallest = num3;
        }
    }

    else
    {
        if (num2 < num3)
        {
            theSmallest = num2;
        }
        else
        {
            theSmallest = num3;
        }
    }

    cout << theSmallest << endl;
}