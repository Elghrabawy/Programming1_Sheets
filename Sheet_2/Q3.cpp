#include <iostream>
using namespace std;

int main()
{
    int num1, num2, num3;
    cin >> num1 >> num2 >> num3;

    int theSmallest;

    if (num1 < num2)
    {
        // num1 < num2 and num1 < num3
        if (num1 <= num3)
        {
            theSmallest = num1;
        }
        // num3 < num1 and num1 < num2
        else
        {
            theSmallest = num3;
        }
    }

    else
    {
        // num2 < num1 and num2 < num3
        if (num2 < num3)
        {
            theSmallest = num2;
        }
        // num2 < num1 and num3 < num2
        else
        {
            theSmallest = num3;
        }
    }

    cout << theSmallest << endl;
}