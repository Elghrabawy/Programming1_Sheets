#include <iostream>
using namespace std;

struct time
{
    int hours, minutes;
    string period;

    void set(int h, int m)
    {
        hours = h, minutes = m, period;
    }

    void set(int h, int m, string p)
    {
        hours = h, minutes = m, period = p;
    }

    string show_24()
    {
        convert_to24();
        // cout << hours << ':' << minutes;
        printf("%0.2d:%0.2d", hours, minutes);
    }

    string show_12()
    {
        convert_to12();
        // cout << hours << ':' << minutes << ' ' << period;
        printf("%0.2d:%0.2d %s", hours, minutes, period.c_str());
    }

    void convert_to24()
    {
        if (period == "PM")
            hours += 12;

        period.clear();
    }

    void convert_to12()
    {
        if (hours <= 12)
            period = "AM";
        else if (hours <= 24)
        {
            period = "PM";
        }

        hours %= 12;
    }
};

int get_choises()
{
    int ch;

    cout << "1 - Convert from 24-hour notation to 12-hour notation\n";
    cout << "2 - Convert from 12-hour notation to 24-hour notation\n";

    cout << "Enter number from 1 to 2 : ";
    cin >> ch;

    if (ch >= 1 && ch <= 2)
        return ch;
    else
    {
        cout << "\nInvalid input:(\n>> Please try again..\n      ----------------------------------\n";
        get_choises();
    }
}

void get_time_24(time &t)
{
    int hours, minutes;
    char colon;

    cout << "Enter time like this format (HH:MM).\n";
    cin >> hours >> colon >> minutes;

    t.set(hours, minutes);
}

void get_time_12(time &t)
{
    int hours, minutes;
    char colon;
    string period;

    cout << "Enter time like this format (HH:MM AM) or (HH:MM PM).\n";
    cin >> hours >> colon >> minutes >> period;

    t.set(hours, minutes, period);
}

int main()
{
    time T;
    int choise = get_choises();

    switch ((choise))
    {
    case 1:
        get_time_24(T);
        cout << "The time with 12-hour notation is ";
        T.show_12();
        break;

    case 2:
        get_time_12(T);
        cout << "The time with 24-hour notation is ";
        T.show_24();
    }
}
