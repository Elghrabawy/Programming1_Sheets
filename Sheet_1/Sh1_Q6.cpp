#include <iostream>
using namespace std;

// O(to - from)
int sum_from_to_v1(int from, int to)
{
    if (to < from)
        swap(from, to);

    int sum = 0;

    for (int i = from; i <= to; i++)
    {
        sum += i;
    }

    return sum;
}

int sum(int n)
{
    int isNega = n < 0 ? -1 : 1;

    n = abs(n);
    return isNega * (n * (n + 1)) / 2;
}

// O(1);
int sum_from_to_v2(int from, int to)
{
    if (to < from)
        swap(from, to);

    if (from > 0)
        return sum(to) - sum(from - 1);

    if (from == 0)
        return sum(to);

    if (from < 0 && to >= 0)
        return sum(from) + sum(to);

    if (to < 0)
        return sum(from) - sum(to + 1);
}

int main()
{
    int from, to;
    cout << "Enter the range: ";
    cin >> from >> to;

    cout << sum_from_to_v1(from, to) << endl;
    cout << sum_from_to_v2(from, to) << endl;
}