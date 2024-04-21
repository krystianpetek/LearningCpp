#include <iostream>

using namespace std;

float meters;

float how_many_inches(float meters)
{
    float inches = meters * 39.37;
    return inches;
}

float how_many_yards(float meters)
{
    float yards = meters * 1.0936;
    return yards;
}

void how_many_miles(float meters)
{
    float miles = meters * 0.000621371;
    cout << "Miles: " << miles << endl;
}

int main()
{
    cout << "How many meters: ";

    cin >> meters;
    cout << "Meters: " << meters << endl;

    cout << "Inches: " << how_many_inches(meters) << endl;

    cout << "Yards: " << how_many_yards(meters) << endl;

    return 0;
}