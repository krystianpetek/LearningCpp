#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>
#include <algorithm>

using namespace std;

int main()
{

    int choice;
    while (choice != 4)
    {
        cout << "Choose what you want to do: " << endl;
        cout << "1. Write to file." << endl;
        cout << "2. Read from file." << endl;
        cout << "3. Quiz." << endl;
        cout << "4. Exit." << endl;

        cin >> choice;

        if (choice == 1)
        {
            string firstName, lastName;
            int telephone;

            cout << "Enter first name: ";
            cin >> firstName;

            cout << "Enter last name: ";
            cin >> lastName;

            cout << "Enter telephone: ";
            cin >> telephone;

            fstream file;

            file.open("8_contact.txt", ios::out | ios::app);

            file << firstName << endl;
            file << lastName << endl;
            file << telephone << endl;

            file.close();
        }

        if (choice == 2)
        {
            fstream file;

            file.open("8_contact.txt", ios::in);

            if (file.good() == false)
            {
                cout << "File does not exist!" << endl;
                exit(0);
            }

            string line;
            int numberOfLine = 1;

            string firstName, lastName;
            int telephone;

            while (getline(file, line))
            {
                switch (numberOfLine)
                {
                case 1:
                    firstName = line;
                    break;
                case 2:
                    lastName = line;
                    break;
                case 3:
                    telephone = atoi(line.c_str());
                    break;
                }

                numberOfLine++;
            }

            cout << "First name: " << firstName << endl;
            cout << "Last name: " << lastName << endl;
            cout << "Telephone: " << telephone << endl;

            file.close();
        }

        if (choice == 3)
        {
            string topic, userName;
            string content[5], answerA[5], answerB[5], answerC[5], answerD[5], correctAnswer[5];

            fstream file;

            file.open("8_quiz.txt", ios::in);
            if (file.good() == false)
            {
                cout << "File does not exist!" << endl;
                exit(0);
            }

            string line;
            int lineNumber = 1, questionNumber = 0;
            while (!file.eof())
            {
                getline(file, line);

                switch (lineNumber)
                {
                case 1:
                    topic = line;
                    break;
                case 2:
                    userName = line;
                    break;
                case 3:
                    content[questionNumber] = line;
                    break;
                case 4:
                    answerA[questionNumber] = line;
                    break;
                case 5:
                    answerB[questionNumber] = line;
                    break;
                case 6:
                    answerC[questionNumber] = line;
                    break;
                case 7:
                    answerD[questionNumber] = line;
                    break;
                case 8:
                    correctAnswer[questionNumber] = line;
                    break;
                }

                if (lineNumber == 8)
                {
                    lineNumber = 2;
                    questionNumber++;
                }

                lineNumber++;
            }

            file.close();

            int points = 0;
            for (int i = 0; i < 5; i++)
            {
                cout << "Question " << i + 1 << ": " << content[i] << endl;
                cout << "A. " << answerA[i] << endl;
                cout << "B. " << answerB[i] << endl;
                cout << "C. " << answerC[i] << endl;
                cout << "D. " << answerD[i] << endl;

                string userAnswer;
                cout << "Your answer: ";
                cin >> userAnswer;

                transform(userAnswer.begin(), userAnswer.end(), userAnswer.begin(), ::tolower);

                if (userAnswer == correctAnswer[i])
                {
                    cout << "Correct!" << endl;
                    points++;
                }
                else
                {
                    cout << "Incorrect!" << endl;
                }
            }

            cout << "You got " << points << " points." << endl;
        }

        if (choice == 4)
        {
            cout << "Goodbye!" << endl;
        }

        system("pause");
        system("cls");
    }

    return 0;
}