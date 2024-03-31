#include <iostream>
#include <cstdlib>
#include <time.h>
#include <windows.h>

using namespace std;

int main()
{
    int choice;
    while (choice != 4)
    {
        cout << "Choose what you want to do: " << endl;
        cout << "1. Guess the number." << endl;
        cout << "2. Lotto." << endl;
        cout << "3. Exit." << endl;

        cin >> choice;

        if (choice == 1)
        {

            int randomNumber, guessNumber, counter = 0;

            srand(time(NULL));
            randomNumber = rand() % 100 + 1;

            while (guessNumber != randomNumber)
            {
                counter++;

                cout << "Guess the number: ";
                cin >> guessNumber;

                if (guessNumber == randomNumber)
                {
                    cout << "Congratulations! You guessed the number!" << endl;
                    break;
                }
                else if (guessNumber < randomNumber)
                {
                    cout << "The number is too small." << endl;
                }
                else
                {
                    cout << "The number is too big." << endl;
                }
            }

            cout << "You needed " << counter << " attempts to guess the number." << endl;
        }
        if (choice == 2)
        {
            int number;

            cout << "Hello in Lotto! After 3 seconds, the machine will draw 6 numbers from 1 to 49." << endl;
            Sleep(3000);
            srand(time(NULL));

            for (int i = 1; i <= 6; i++)
            {
                number = rand() % 49 + 1;
                Sleep(1000);
                cout << "Number " << i << ": " << number << "\a" << endl;
            }
        }
        if (choice == 3)
        {
            cout << "Goodbye!" << endl;
            break;
        }
        system("pause");
        return 0;
    }
}