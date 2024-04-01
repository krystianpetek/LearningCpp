#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    int choice;
    while (choice != 6)
    {
        cout << "Choose what you want to do: " << endl;
        cout << "1. Guessing the gender." << endl;
        cout << "2. Reverting a word." << endl;
        cout << "3. Concatenation of two words." << endl;
        cout << "4. Change case of a word." << endl;
        cout << "5. Search for a word in a sentence." << endl;
        cout << "6. Erase word from sentence and insert word to sentence. (replace)" << endl;
        cout << "7. Exit." << endl;

        cin >> choice;

        if (choice == 1)
        {
            string name;
            cout << "Pass your name: ";
            cin >> name;

            cout << "Your name is: " << name << endl;
            cout << "Your name has " << name.size() << " characters." << endl;

            if (name[name.size() - 1] == 'a')
                cout << "I think you are woman" << endl;
            else
                cout << "I think you are man" << endl;
        }

        if (choice == 2)
        {
            string word;
            cout << "Pass a word: ";

            cin.ignore();
            getline(cin, word);

            cout << "Your word is: " << word << endl;

            for (int i = word.size() - 1; i >= 0; i--)
            {
                cout << word[i];
            }
            cout << endl;
        }

        if (choice == 3)
        {
            string word1, word2, concatWord;
            cout << "Pass first word: ";
            cin >> word1;
            cout << "Pass second word: ";
            cin >> word2;

            cout << "Your words are: " << word1 << " and " << word2 << endl;

            concatWord = word1 + word2;
            cout << "Concatenation of your words is: " << concatWord << endl;
        }

        if (choice == 4)
        {
            string word;
            cout << "Pass a word: ";
            cin >> word;

            cout << "Your word is: " << word << endl;

            string wordUpper = word, wordLower = word;

            transform(wordUpper.begin(), wordUpper.end(), wordUpper.begin(), ::toupper);
            transform(wordLower.begin(), wordLower.end(), wordLower.begin(), ::tolower);

            cout << "Your word after changing case to upper is: " << wordUpper << endl;
            cout << "Your word after changing case to lower is: " << wordLower << endl;
        }

        if (choice == 5)
        {
            string sentence, word;
            cout << "Pass a sentence: ";

            cin.ignore();
            getline(cin, sentence);

            cout << "Pass a word to search: ";
            cin >> word;

            cout << "Your sentence is: " << sentence << endl;
            cout << "Your word is: " << word << endl;

            size_t position = sentence.find(word);

            if (position != string::npos)
                cout << "Your word is in the sentence." << endl;
            else
                cout << "Your word is not in the sentence." << endl;
        }

        if (choice == 6)
        {
            string sentence, word1, word2;
            cout << "Pass a sentence: ";

            cin.ignore();
            getline(cin, sentence);

            cout << "Pass a word to erase: ";
            cin >> word1;

            cout << "Pass a word to insert: ";
            cin >> word2;

            cout << "Your sentence is: " << sentence << endl;
            cout << "Your word to erase is: " << word1 << endl;
            cout << "Your word to insert is: " << word2 << endl;

            size_t position = sentence.find(word1);

            if (position != string::npos)
            {
                sentence.erase(position, word1.size());
                sentence.insert(position, word2);

                // or

                sentence.replace(position, word1.size(), word2);

                // new sentence
                string newSentence = sentence.substr(0, position / 2);
            }

            cout << "Your sentence after changes is: " << sentence << endl;
        }

        if (choice == 7)
        {
            cout << "Goodbye!" << endl;
        }
    }
    system("pause");
    return 0;
}