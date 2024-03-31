#include <iostream>

using namespace std;

int main()
{
    int numberOfClassMembers, numberOfSugars;
    cout << "Enter the number of class members: ";
    cin >> numberOfClassMembers;
    cout << "Enter the numbers of sugars: ";
    cin >> numberOfSugars;

    numberOfClassMembers--;

    if (numberOfSugars < numberOfClassMembers)
    {
        cout << "There are not enough sugars for each class member.";
    }
    else if (numberOfSugars % numberOfClassMembers == 0)
    {
        cout << "Each class member will get " << numberOfSugars / numberOfClassMembers << " sugars.";
    }
    else
    {
        cout << "Each class member will get " << numberOfSugars / numberOfClassMembers << " sugars and there will be " << numberOfSugars % numberOfClassMembers << " sugars left.";
    }
    return 0;
}