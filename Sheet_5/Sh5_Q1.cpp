#include <iostream>
#include <cmath>

using namespace std;

float mean(int x[], int n)
{
    float sum = 0.0;

    // calculate sum
    for (int i = 0; i < n; i++)
        sum += x[i];

    // mean = sum / n
    return sum / n;
}

float standard_deviation(int x[], int n, int mean)
{
    float var = 0.0;

    // calculate variance = (standard deviation) power 2
    for (int i = 0; i < n; i++)
    {
        var += pow((x[i] - mean), 2) / n;
    }

    // standard deviation = sqrt(variance)
    return sqrt(var);
}

int main()
{
    int data[] = {30, 50, 55, 60, 65, 70, 70, 80};
    int n = 8;

    float Mean = mean(data, n);
    float StandardDeviation = standard_deviation(data, n, Mean);

    cout << "Mean : " << Mean << endl;
    cout << "Standard Deviation : " << StandardDeviation << endl;
}