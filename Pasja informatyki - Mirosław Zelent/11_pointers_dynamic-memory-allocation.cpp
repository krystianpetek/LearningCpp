#include <iostream>
#include <cstdlib>
#include <time.h>

using namespace std;

void first_pointer()
{
    int number = 144;
    int *p_number = &number;

    cout << "Number: " << number << endl;
    cout << "Address: " << &number << endl;

    cout << "Pointer: " << p_number << endl;
    cout << "Value from pointer: " << *p_number << endl;
}

void first_array_pointer(int how_many)
{

    int *pointer_array = new int[how_many];

    for (int i = 0; i < how_many; i++)
    {
        *pointer_array = i;

        cout << "Pointer : " << (int)pointer_array << ", Pointer value : " << *pointer_array << endl;
        pointer_array++;
    }

    delete[] pointer_array;
}

void enumerate_array_without_pointers(int how_many)
{
    clock_t start, stop;

    int *array = new int[how_many];

    start = clock();

    for (int i = 0; i < how_many; i++)
    {
        array[i] = i;
        array[i] += 50;
    }

    stop = clock();

    cout << "Time without pointers: " << (double)(stop - start) / CLOCKS_PER_SEC << endl;

    delete[] array;
}

void enumerate_array_with_pointers(int how_many)
{
    clock_t start, stop;

    int *array = new int[how_many];

    start = clock();

    for (int i = 0; i < how_many; i++)
    {
        *array = i;
        *array += 50;
        array++;
    }

    stop = clock();

    cout << "Time with pointers: " << (double)(stop - start) / CLOCKS_PER_SEC << endl;

    delete[] array;
}

float average(float *array, int size)
{
    float sum = 0;

    for (int i = 0; i < size; i++)
    {
        sum += *array;
        array++;
    }

    return sum / size;
}

int main()
{
    first_pointer();

    int how_many;

    cout << "How many elements: ";
    cin >> how_many;

    first_array_pointer(how_many);

    enumerate_array_without_pointers(how_many);

    enumerate_array_with_pointers(how_many);

    float array[3] = {1.5, 2.3, 0.75};
    cout << "Average: " << average(array, 3) << endl;

    return 0;
}