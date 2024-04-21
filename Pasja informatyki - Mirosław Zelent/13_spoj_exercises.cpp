#include <iostream>

int main()
{
    // https://pl.spoj.com/problems/PTEST/
    int a, b;
    std::cin >> a >> b;
    std::cout << a + b << std::endl;

    // https://pl.spoj.com/problems/VSR/

    int v1, v2, how_many;

    std::cin >> how_many;

    for (int i = 1; i <= how_many; i++)
    {
        std::cin >> v1 >> v2;
        std::cout << 2 * v1 * v2 / (v1 + v2) << std::endl;
    }

    return 0;
}