/*******************************************************************************/
/*******************************************************************************/
/*   Answer : The program task is printing the element of the array reversed.  */
/*******************************************************************************/
/*******************************************************************************/

#include <iostream>
using namespace std;

void someFunction(int a[], int cur, int sz);

int main()
{
    const int arraySize = 10;
    int a[arraySize] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    cout << "The values in the array are : \n";
    someFunction(a, 0, arraySize);
    cout << endl;
}

void someFunction(int a[], int cur, int sz)
{
    if (cur < sz)
    {
        someFunction(a, cur + 1, sz);
        cout << a[cur] << " ";
    }
}
