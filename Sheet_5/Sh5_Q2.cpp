#include <iostream>
#include <cmath>
using namespace std;

void input_values(float &v, float t){
    cout << "Enter the wind speed in miles per hours : ";
    cin >> v;

    cout << "Enter the temperature in degrees Fahrenheit : ";
    cin >> t;
}

float windchill_factor(float v, float t){
    return 35.74 + 0.6215 * t - 35.75 * pow(v, 0.16) + 0.4275 * t * pow(v, 0.16);
}

int main()
{
    float W, V, T;

    input_values(V, T);
    W = windchill_factor(V, T);

    cout << "The windchilld factor is : " << W << endl;
}

// V is the wind speed in miles per hour.
// T is the temperature in degrees Fahrenheit.
// W is windchill factor.
