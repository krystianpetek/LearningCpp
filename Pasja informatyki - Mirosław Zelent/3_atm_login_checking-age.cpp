#include <iostream>

using namespace std;

int main()
{
    int choice;
    while (choice != 4)
    {
        cout << "Choose what you want to do: " << endl;
        cout << "1. ATM." << endl;
        cout << "2. Login to the system." << endl;
        cout << "3. Checking age of the user." << endl;
        cout << "4. Exit." << endl;

        cin >> choice;

        if (choice == 1)
        {
            string PIN;

            cout << "Welcome to the ATM." << endl;

            cout << "Enter your PIN: ";
            cin >> PIN;

            if (PIN == "1729")
            {
                cout << "Correct PIN." << endl;
            }
            else
            {
                cout << "Incorrect PIN." << endl;
            }
        }
        else if (choice == 2)
        {
            string login, password;

            cout << "Pass the login: ";
            cin >> login;
            cout << "Pass the password: ";
            cin >> password;

            if (login == "admin" && password == "admin")
            {
                cout << "Correct login and password." << endl;
            }
            else
            {
                cout << "Incorrect login or password." << endl;
            }
        }
        else if (choice == 3)
        {
            int age;

            cout << "Enter your age: ";
            cin >> age;

            if (age >= 18)
            {
                cout << "You are an adult and you can't be a president." << endl;
            }
            else if (age >= 18 && age < 35)
            {

                cout << "You are an adult and you can't be a president." << endl;
            }
            else
            {
                cout << "You are not an adult." << endl;
            }
        }
        else if (choice == 4)
        {
            cout << "Goodbye." << endl;
        }
        else
        {
            cout << "Incorrect choice." << endl;
            choice = 0;
        }
    }
}