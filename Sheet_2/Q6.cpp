#include <iostream>
using namespace std;

int main()
{

    int theNumber = 140;
    cout << "I have a number between 1 and 1000.\n";

    int theGuessNumber = -1;
    while (theGuessNumber != theNumber)
    {
        cout << "Enter an integer guess: ";
        cin >> theGuessNumber;

        if (theGuessNumber > theNumber)
        {
            cout << "> Too high. Try again.\n\n";
        }

        if (theNumber > theGuessNumber)
        {
            cout << "> Too low. Try again.\n\n";
        }

        if (theNumber == theGuessNumber)
        {
            cout << "Excellent! You guessed the number!\n\n";
            string again;

            cout << "Would you like to play again (y or n)? ";
            cin >> again;

            if (again == "y")
                continue;
            else
                break;
        }
    }
}