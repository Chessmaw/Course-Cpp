#include <iostream>

int main()
{
    for (int i = 1; i <= 3; i++)
    {
        // continue;
        for (int j = 0; j <= 10; j++)
        {
            std::cout << j << ' ';
        }
        std::cout << '\n';
        // break;
    }
    return 0;
}