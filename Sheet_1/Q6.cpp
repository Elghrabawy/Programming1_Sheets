#include <iostream>
using namespace std;

int sum(int n)
{
    int isNega = n < 0 ? -1 : 1;

    n = abs(n);
    return isNega * (n * (n + 1)) / 2;
}

int sum_from_to(int from, int to)
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
    cin >> from >> to;
    cout << sum_from_to(from, to);
}