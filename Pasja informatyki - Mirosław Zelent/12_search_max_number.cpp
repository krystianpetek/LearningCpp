#include <iostream>
#include <cmath>

void searching_max_number()
{
    std::cout << "Searching for the maximum number in the array" << std::endl;

    int *array = new int[3];

    array[0] = 5;
    array[1] = 15;
    array[2] = 10;

    int max = 0;

    for (int i = 0; i < 3; i++)
    {
        if (array[i] > max)
        {
            max = array[i];
        }
    }

    std::cout << "Max number: " << max << std::endl;
}

void searching_number_closest_to_average()
{
    std::cout << "Searching for the number closest to the average of the numbers in the array" << std::endl;

    std::cout << "Enter the number of elements in the array: ";

    int n = 0;

    std::cin >> n;

    float *array = new float[n];

    double sum = 0;

    for (int i = 0; i < n; i++)
    {
        std::cout << "Enter the number: ";
        std::cin >> array[i];

        sum += array[i];
    }

    double average = sum / n;

    std::cout << "Average: " << average << std::endl;

    double min_difference = 0;
    for (int i = 0; i < n; i++)
    {
        min_difference = array[i];

        if ((abs(array[i]) - average) < min_difference)
        {
            min_difference = array[i];
        }
    }

    std::cout << "The number closest to the average: " << min_difference << std::endl;
}

int main()
{
    searching_max_number();

    searching_number_closest_to_average();

    return 0;
}