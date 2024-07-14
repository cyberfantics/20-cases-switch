#include <iostream>
using namespace std;

int main()
{
    int number, condition; // condition is a integer which change in quotient or remainder according to condition

    cout << "Enter a number between 0-100 ";
    cin >> number;

    // First we assign quotient in variable condition and after that we change it according to condition
    condition = number / 10;

    for (int i = 0; i < 2; i++)
    {
        switch (condition)
        {
        case -9:
            cout << "One";
            break;

        case -8:
            cout << "Two";
            break;

        case -7:
            cout << "Three";
            break;

        case -6:
            cout << "Four";
            break;

        case -5:
            cout << "Five";
            break;

        case -4:
            cout << "Six";
            break;

        case -3:
            cout << "Seven";
            break;

        case -2:
            cout << "Eight";
            break;

        case -1:
            cout << "Nine";
            break;

        case 2:
            cout << "Twenty ";
            break;

        case 3:
            cout << "Thirty ";
            break;

        case 4:
            cout << "Fourty ";
            break;

        case 5:
            cout << "Fifty ";
            break;

        case 6:
            cout << "Sixty ";
            break;

        case 7:
            cout << "Seventy ";
            break;

        case 8:
            cout << "Eighty ";
            break;

        case 9:
            cout << "Ninty ";
            break;

        case 10:
            cout << "Ten";
            break;

        case 11:
            cout << "Eleven ";
            break;

        case 12:
            cout << "Twelve";
            break;

        case 13:
            cout << "Thirteen";
            break;

        case 14:
            cout << "Fourteen";

        case 15:
            cout << "Fifteen";
            break;

        case 16:
            cout << "Sixteen";

        case 17:
            cout << "Seventeen";
            break;

        case 18:
            cout << "Eighteen";

        case 19:
            cout << "Ninteen";
            break;

        default:
            break;
        }

        while (number > 9 and number < 20)
        {
            condition = (number % 10) + 10;
            break;
        }

        while ((number < 10 and number > 0) or number > 19)
        {
            condition = (number % 10) - 10;
            break;
        }
    }
    return 0;
}
