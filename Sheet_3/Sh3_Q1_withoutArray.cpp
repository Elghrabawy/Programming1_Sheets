#include <iostream>
using namespace std;

void bookEconomy(int &avFirstClass, int &avEconomy);
void bookFirstClass(int &avFirstClass, int &avEconomy);
void printBoardingPassIndicating(int num, bool isFirstClass);

int main()
{
    // number of availables seats in first calss, and economy
    int firstClass = 5, economy = 5;

    int choose = 0;
    while (choose != -1)
    {
        cout << "Available seats:\n";
        cout << "  1 - First Class : " << firstClass << endl;
        cout << "  2 - Economy     : " << economy << endl;

        cout << endl;
        cout << "Choose class (1 - 2)? ";
        cin >> choose;

        switch (choose)
        {
        case 1:
            bookFirstClass(firstClass, economy);
            break;
        case 2:
            bookEconomy(firstClass, economy);
            break;
        default:
            cout << "Invalid input";
            return 0;
            break;
        }

        cout << endl;
        cout << "Do you want continue (y or n)? ";
        string con;
        cin >> con;

        if (con == "n")
            break;
        cout << "\n\n--------------------------------------\n\n";
    }
}

void printBoardingPassIndicating(int num, bool isFirstClass)
{
    printf("+--- boarding pass indicating ---+\n");
    printf("|   Seat No.     : %11d   |\n", num);
    printf("|   Class        : %11s   |\n", isFirstClass ? "First Class" : "Economy");
    printf("+--------------------------------+\n");
}

void bookFirstClass(int &avFirstClass, int &avEconomy)
{
    if (avFirstClass > 0)
    {
        cout << "Done booked..\n\n";
        printBoardingPassIndicating(avFirstClass, 1);
        avFirstClass--;
    }
    else if (avEconomy > 0)
    {
        cout << "Sorry but all seats in first class is ocupied\n";
        cout << "Do you want book seat in economy (y or n)? ";
        string choose;
        cin >> choose;

        if (choose == "y")
            bookEconomy(avFirstClass, avEconomy);
        else
            return;
    }
    else
    {
        cout << "Sorry no available seats right now.\n";
    }
}

void bookEconomy(int &avFirstClass, int &avEconomy)
{
    if (avEconomy > 0)
    {
        cout << "Done booked..\n\n";
        printBoardingPassIndicating(avEconomy, 0);
        avEconomy--;
    }
    else if (avFirstClass > 0)
    {
        cout << "Sorry but all seats in economy in ocupied\n";
        cout << "Do you want book seat in first class (y or n)? ";
        string choose;
        cin >> choose;

        if (choose == "y")
            bookFirstClass(avFirstClass, avEconomy);
        else
            return;
    }
}