#include <iostream>
using namespace std;

int coinToss(){
    return 1 + rand() % 2;
}
int main()
{
    int timesOfTossing, curToss;
    cout << "How many times the coin should be tossed ? ";
    cin >> timesOfTossing;


    for(int i = 1; i <= timesOfTossing; i++){
        curToss = coinToss();

        cout << i << " : ";

        switch (curToss)
        {
        case 1:
            cout << "Heads\n";
            break;
        case 2:
            cout << "Tails\n";
            break;
        }
    }
}