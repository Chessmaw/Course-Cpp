#include <iostream>

int main()
{
    int N1;
    std::cout << "\t\tWelcome" << '\n';
    std::cout << "Choose, What day it is today(1-7) :  ";
    std::cin >> N1;
    switch (N1)
    {
    case 1:
        std::cout << "Today is Monday";
        break;
    case 2:
        std::cout << "Today is Tuesday";
        break;
    case 3:
        std::cout << "Today is Wednesday";
        break;
    case 4:
        std::cout << "Today is Thursday";
        break;
    case 5:
        std::cout << "Today is Friday";
        break;
    case 6:
        std::cout << "Today is Saturday";
        break;
    case 7:
        std::cout << "Today is Sunday";
        break;

    default:
        std::cout << "You did not select a day";
        break;
    }
}