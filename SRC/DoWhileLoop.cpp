#include <iostream>

int main()
{
    int N1;
    do
    {
        std::cout << "Enter a positive number: ";
        std::cin >> N1;
    } while (N1 <= 0);
    std::cout << "The # is: " << N1;
    return 0;
}