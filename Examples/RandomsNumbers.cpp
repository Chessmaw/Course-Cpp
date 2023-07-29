#include <iostream>
#include <ctime>

int main()
{
    srand(time(NULL));
    int N1 = (rand() % 100) + 1;
    char Letter = rand();
    std::cout<<Letter;
    std::cout << N1;
    return 0;
}