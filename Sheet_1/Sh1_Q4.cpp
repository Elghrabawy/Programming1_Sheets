#include <iostream>
using namespace std;

#define SetPre(n, x) cout << fixed << setprecision(n) << x

struct Car
{
    float hours = 0;
    float charge = 0;
};

float calcCharges(float hours)
{
    if (hours <= 3)
    {
        return 2.0;
    }
    else
    {
        float charge = ((hours - 3) * 0.5) + 2;
        return (charge <= 10.0 ? charge : 10.0);
    }
}

int main()
{
    int numOfCars;

    cout << "Enter the number of cars: ";
    cin >> numOfCars;

    Car cars[numOfCars], total;

    for (int i = 0; i < numOfCars; i++)
    {
        printf("The number of hours that car number %d has been in the garage : ", i + 1);
        cin >> cars[i].hours;

        cars[i].charge = calcCharges(cars[i].hours);

        total.hours += cars[i].hours;
        total.charge += cars[i].charge;
    }

    // printf("%-4sCar\tHours\t Charge%4s\n", "|", "|");

    printf("\n+-------------------------------------+\n");
    printf("%-6s%-10s%-10s%-10s%3s\n", "|", "Car", "Hours", "Charges", "|");

    for (int i = 0; i < numOfCars; i++)
    {
        printf("%-6s%-10d%-10.1f%-10.2f%3s\n", "|", i + 1, cars[i].hours, cars[i].charge, "|");
    }
    printf("%-6s%-10s%-10.1f%-10.2f%3s\n", "|", "TOTAL", total.hours, total.charge, "|");
    printf("+-------------------------------------+\n");
}