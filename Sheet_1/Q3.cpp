#include <iostream>
using namespace std;

/***********************************************************/
/*************************  A  *****************************/
/***********************************************************/

// The Error :
// 1 - declare function including another function.

// The Correct :
int g()
{
    cout << "Inside function g" << endl;
}
int h()
{
    cout << "Inside function h" << endl;
}

/***********************************************************/
/*************************  B  *****************************/
/***********************************************************/

// The Error :
// 1 - There is no return value.

// The Correct :
int sum(int x, int y)
{
    int result;

    result = x + y;
    return result;
}

/***********************************************************/
/*************************  C  *****************************/
/***********************************************************/

// The Error :
// 1- There is no return value.

// The Correct :
int sum(int n)
{
    if (n == 0)
        return 0;
    else
        return n + sum(n - 1);
}

/***********************************************************/
/*************************  D  *****************************/
/***********************************************************/

// The Errors :
// 1 - Declare variable 'a' with the same name of parameters(shadow of parameter).
// 2 - Semicolon before curly brackets.

// the Correct :
void f(double a)
{
    cout << a << endl;
}

/***********************************************************/
/*************************  E  *****************************/
/***********************************************************/

// The Error :
// 1 - Return integer value and the function without return type.

// The Corrcet :

// 1 - Make function with return type int.
int product_1()
{
    int a, b, c, result;
    cout << "Enter three integers : ";
    cin >> a >> b >> c;
    result = a * b * c;

    return result;
}

// 2 - Delete return line
void product_2()
{
    int a, b, c, result;
    cout << "Enter three integers : ";
    cin >> a >> b >> c;
    result = a * b * c;

    cout << "Result is " << result;
}

/***********************************************************/

int main()
{
}