#include <iostream>
using namespace std;

int main()
{

    // creat random number between 1 to 1000
    int theNumber = 1 + rand() % 1000;

    cout << "I have a number between 1 and 1000.\n";

    int theGuessNumber = -1;

    while (true)
    {
        cout << "Enter an integer guess: ";
        cin >> theGuessNumber;

        // if the guessed number is greater than the target.
        if (theGuessNumber > theNumber)
        {
            cout << "> Too high. Try again.\n\n";
        }

        // if the guessed number is smaller than the target.
        if (theNumber > theGuessNumber)
        {
            cout << "> Too low. Try again.\n\n";
        }

        // if the guessed number equal the target.
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