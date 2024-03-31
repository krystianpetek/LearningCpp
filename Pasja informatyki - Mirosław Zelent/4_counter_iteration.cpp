#include <iostream>
#include <unistd.h>
#include <windows.h>
#include <cstdlib>

using namespace std;

int main()
{

	int choice;
	while (choice != 4)
	{
		cout << "Choose what you want to do: " << endl;
		cout << "1. Counter." << endl;
		cout << "2. Iterate name." << endl;
		cout << "3. Population counter." << endl;
		cout << "4. Exit." << endl;

		cin >> choice;

		if (choice == 1)
		{

			for (int i = 15; i >= 0; i--)
			{
#ifdef _WIN32
				cout << "Windows" << endl;
				Sleep(1000);
				system("cls");
#elif __linux__
				cout << "Linux" << endl;
				sleep(1);
				system("clear");
#endif
				cout << i << endl;
			}
			cout << "Jebut!";
		}
		if (choice == 2)
		{

			string name;
			int number;
			cout << "Pass your name: ";
			cin >> name;
			cout << "Pass iteration number: ";
			cin >> number;

			for (int i = 1; i <= number; i++)
			{
				cout << i << ". " << name << endl;
			}
		}

		if (choice == 3)
		{
			int population = 1, hours = 0;

			while (population < 100000000)
			{
				hours++;
				population *= 2;

				cout << "After " << hours << " hours the population is: " << population << endl;
			}
		}

		if (choice == 4)
		{
			cout << "Goodbye!" << endl;
			return 0;
		}
	}
}