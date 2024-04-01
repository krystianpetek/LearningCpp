#include <iostream>
#include <stdio.h>
#include <cstdlib>
#include <conio.h>

using namespace std;

int main()
{
    int choice;
    while (choice != 3)
    {
        cout << "Choose what you want to do: " << endl;
        cout << "1. Calculator." << endl;
        cout << "2. Number days of month." << endl;
        cout << "3. Exit." << endl;

        cin >> choice;

        if (choice == 1)
        {
            for (;;)
            {

                int x, y;
                cout << "Pass the first number x: ";
                cin >> x;
                cout << "Podaj the second number y: ";
                cin >> y;

                cout << endl;

                cout << "Menu: " << endl;
                cout << "1. Addition" << endl;
                cout << "2. Subtraction" << endl;
                cout << "3. Multiplication" << endl;
                cout << "4. Division" << endl;
                cout << "5. Exit" << endl;

                char choice;
                cout << "Choice: ";
                choice = getch();

                switch (choice)
                {
                case '1':
                    cout << "Sum: " << x + y << endl;
                    break;
                case '2':
                    cout << "Difference: " << x - y << endl;
                    break;
                case '3':
                    cout << "Product: " << x * y << endl;
                    break;
                case '4':
                    cout << "Quotient: " << x / y << endl;
                    break;
                case '5':
                    cout << "Exit" << endl;
                    exit(0);
                    break;
                default:
                    cout << "Wrong choice" << endl;
                    break;
                }

                system("pause");
                system("cls");
            }
        }
        if (choice == 2)
        {
            int month = 0;
            cout << "Pass the number of the month: ";
            if (!(cin >> month))
            {
                cerr << "It's not a number" << endl;
                continue;
            }

            switch (month)
            {
            case 1:
            case 3:
            case 5:
            case 7:
            case 8:
            case 10:
            case 12:
                cout << "31 days" << endl;
                break;

            case 4:
            case 6:
            case 9:
            case 11:
                cout << "30 days" << endl;
                break;

            case 2:
                cout << "Pass the year: ";
                int year;
                cin >> year;

                if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
                    cout << "29 days" << endl;
                else
                    cout << "28 days" << endl;

                break;

            default:
                cout << "Wrong number of the month" << endl;
                break;
            }
        }
        if (choice == 3)
        {
            cout << "Exit" << endl;
            exit(0);
        }
    }
    return 0;
}