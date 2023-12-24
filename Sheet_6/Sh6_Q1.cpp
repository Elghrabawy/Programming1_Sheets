#include <iostream>
using namespace std;

/******************************************************************************/
/*******   A : What is the output if the input is Programming Project?  *******/
/*****  output : Programming < Project (because 4th character 'g' < 'j')  *****/
/******************************************************************************/

/******************************************************************************/
/**********   B : What is the output if the input is Summer Trip?  ************/
/*********  output : Summer < Trip (because 1st character 'S' < 'T')  *********/
/******************************************************************************/

int main()
{
    string str1, str2;
    cin >> str1 >> str2;
    if (str1 == str2)
        cout << str1 + '!' << endl;
    else if (str1 > str2)
        cout << str1 + " > " + str2 << endl;
    else
        cout << str1 + " < " + str2 << endl;
}