#include <iostream>
#include <iomanip>

using namespace std;

int main()
{

    int choice;
    while (choice != 3)
    {
        cout << "Choose what you want to do: " << endl;
        cout << "1. Grades." << endl;
        cout << "2. Fibonacci sequence." << endl;
        cout << "3. Exit." << endl;

        cin >> choice;

        if (choice == 1)
        {
#pragma region Grades
            float studentGrades[5];
            float sumOfGrades = 0;

            cout << "Pass 5 grades of the student: ";

            for (int i = 0; i < 5; i++)
            {
                cout << endl
                     << "Grade " << i + 1 << ": ";

                cin >> studentGrades[i];
                sumOfGrades += studentGrades[i];
            }

            cout << endl
                 << "The average grade of the student is: " << sumOfGrades / 5 << endl;

#pragma endregion
        }
        if (choice == 2)
        {
#pragma region Fibonacci sequence
            long double fibonacci[100000];
            int numbers = 0;

            cout << "How many numbers of the Fibonacci sequence do you want to display?" << endl;
            cin >> numbers;

            cout << setprecision(100);

            for (int i = 0; i < numbers; i++)
            {
                if (i == 0 || i == 1)
                {
                    fibonacci[i] = 1;
                }
                else
                {
                    fibonacci[i] = fibonacci[i - 1] + fibonacci[i - 2];
                }

                cout << "Number " << i + 1 << " : " << fibonacci[i] << endl;
            }
            cout << "Golden number: " << fibonacci[numbers - 1] / fibonacci[numbers - 2] << endl;

#pragma endregion
        }
    }
    return 0;
}