#include <iostream>
using namespace std;

void freq_v1(int a[], int n)
{
    int freq[1001] = {};

    for (int i = 0; i < n; i++)
    {
        freq[a[i]]++;
    }

    for (int i = 0; i <= 1000; i++)
    {
        if (freq[i])
            printf("The element %d exists %d time%s\n", i, freq[i], (freq[i] > 1 ? "s." : "."));
        // cout << "The element " << i << " exists " << freq[i] << " time" << (freq[i] > 1 ? "s.\n" : ".\n");
    }
}

int main()
{
    int n = 10;
    int a[] = {3, 2, 2, 6, 5, 5, 9, 9, 3, 1};

    freq_v1(a, n);
}