#include <iostream>

int main()
{
    int grade = 45;

    (grade >= 60) ? std::cout << "You pass!" : std::cout << "You fail!";

    return 0;
}
/*

    if (grade >= 60)
    {
        std::cout << "You Pass!";
    }
    else
    {
        std::cout << "You fail!";
    }

*/