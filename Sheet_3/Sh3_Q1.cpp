#include <iostream>
using namespace std;

int bookEconomy(bool isOcupied[]);
int bookFirstClass(bool isOcupied[]);
bool firstClassIsFull(bool isOcupied[]);
bool economyIsFull(bool isOcupied[]);
int firstClassFreeSeats(bool isOcupied[]);
int economyFreeSeats(bool isOcupied[]);
void printBoardingPassIndicating(int num, bool isFirstClass);

int main()
{
    bool isOcupied[10 + 1] = {};

    string isContinue;

    int needClass, curSeat;

    do
    {
        cout << "Available seats:\n";
        cout << "  1 - First Class : " << firstClassFreeSeats(isOcupied) << endl;
        cout << "  2 - Economy     : " << economyFreeSeats(isOcupied) << endl;

        cout << endl;
        cout << "isContinue class (1 - 2)? ";
        cin >> needClass;

        int curSeat;

        switch (needClass)
        {
        case 1:
            curSeat = bookFirstClass(isOcupied);

            // If user can't book seat.
            if (curSeat != -1)
            {
                printBoardingPassIndicating(curSeat, curSeat <= 5);
            }
            break;
        case 2:
            curSeat = bookEconomy(isOcupied);

            // If user can't book seat.
            if (curSeat != -1)
            {
                printBoardingPassIndicating(curSeat, curSeat > 5);
            }
            break;
        default:
            cout << "Invalid input";
            return 0;
            break;
        }

        cout << endl;

        // Check if user want book another seat or not
        cout << "Do you want continue (y or n)? ";
        cin >> isContinue;

        cout << "\n\n--------------------------------------\n\n";

    } while (isContinue == "y");
}

// Print boarding pass indicating.
void printBoardingPassIndicating(int num, bool isFirstClass)
{
    printf("\n+--- boarding pass indicating ---+\n");
    printf("|   Seat No.     : %11d   |\n", num);
    printf("|   Class        : %11s   |\n", isFirstClass ? "First Class" : "Economy");
    printf("+--------------------------------+\n");
}

// Check if all first class seats is ocupied or not
bool firstClassIsFull(bool isOcupied[])
{

    int cntOcupied = 0;

    // Calculate ocupied seats in first class.
    for (int i = 1; i <= 5; i++)
    {
        cntOcupied += isOcupied[i];
    }

    // If ocupied seats equal 5 then all seats is ocupied.
    return cntOcupied == 5;
}

// Check if all economy seats is ocupied or not.
bool economyIsFull(bool isOcupied[])
{

    int cntOcupied = 0;

    // calculate ocupied seats in economy class.
    for (int i = 6; i <= 10; i++)
    {
        cntOcupied += isOcupied[i];
    }

    // if ocupied seats equal 5 then all seats is ocupied.
    return cntOcupied == 5;
}

// Number of not ocupied seats in first class.
int firstClassFreeSeats(bool isOcupied[])
{
    int cntOcupied = 0;

    // calculate not ocupied seats in first class.
    for (int i = 1; i <= 5; i++)
    {
        cntOcupied += !isOcupied[i];
    }

    return cntOcupied;
}

// Number of not ocupied seats in economy class.
int economyFreeSeats(bool isOcupied[])
{
    int cntOcupied = 0;

    // calculate not ocupied seats in economy class.
    for (int i = 6; i <= 10; i++)
    {
        cntOcupied += !isOcupied[i];
    }

    return cntOcupied;
}

// Book seat in first class.
// Return number of booked seat or -1 if can't book any seat.
int bookFirstClass(bool isOcupied[])
{

    // If all seats in first class is ocupied.
    if (firstClassIsFull(isOcupied))
    {
        cout << "Sorry.. all seats in first class is ocupied." << endl;
        cout << "Do you want book in economy ? (y / n) ";
        string answer;
        cin >> answer;

        // If user want book economy seat return number of seat or -1 if don't find any available seats.
        if (answer == "y")
        {
            return bookEconomy(isOcupied);
        }
        // If user don't want book economy seat return -1.
        else
        {
            cout << "Next flight leaves in 3 hours." << endl;
            return -1;
        }
    }

    // There are first class seats not ocupied.
    else
    {
        int numOfSeat;

        // Search for not ocupied seat and return it.
        do
        {
            numOfSeat = 1 + (rand() % 5);
        } while (isOcupied[numOfSeat] != 0);

        isOcupied[numOfSeat] = 1;

        return numOfSeat;
    }
}

// Book seat in economy.
// Return number of booked seat or -1 if can't book any seat.
int bookEconomy(bool isOcupied[])
{

    // If all seats in economy class is ocupied return -1.
    if (economyIsFull(isOcupied))
    {
        cout << "\nSorry.. all seats in economy class is ocupied." << endl;
        return -1;
    }

    // There are economy seats not ocupied.
    else
    {

        int numOfSeat;

        // Search for not ocupied seat and return it.
        do
        {
            numOfSeat = 6 + (rand() % 5);
        } while (isOcupied[numOfSeat] != 0);

        isOcupied[numOfSeat] = 1;

        return numOfSeat;
    }
}