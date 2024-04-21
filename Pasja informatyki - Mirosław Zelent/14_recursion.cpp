#include <iostream>

int first_recursion_func(int n)
{
    if (n == 0)
        return 3;

    return first_recursion_func(n - 1) + 2;
}

long int power(int x, int n)
{
    if (n == 0)
        return 1;

    return x * power(x, n - 1);
}

long int fibonacci(int n)
{
    if (n == 0)
        return 0;

    if (n == 1)
        return 1;

    return fibonacci(n - 1) + fibonacci(n - 2);
}

long int factorial(int n)
{
    if (n == 0)
        return 1;

    return n * factorial(n - 1);
}

int main()
{
    int n = 3;
    std::cout << "first func result: " << first_recursion_func(n) << std::endl;

    int x = 3;
    int y = 4;
    std::cout << "power: " << power(x, y) << std::endl;

    int fib = 6;
    std::cout << "fibonacci: " << fibonacci(fib) << std::endl;

    int fact = 6;
    std::cout << "factorial: " << factorial(fact) << std::endl;

    return 0;
}