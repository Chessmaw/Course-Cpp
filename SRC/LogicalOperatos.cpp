#include <iostream>

//-----------------------------------------------------
// && = Check if two condittions are true
/*

    int temp;
    std::cout << "Enter the temperature: " << '\n';
    std::cin >> temp;
    if (temp > 0 && temp < 30)
    {
        std::cout << "The Temperature is good!";
    }
    else
    {
        std::cout << "The temperature is bad!";
    }
    return 0;

*/
//-----------------------------------------------------
// || = Check if at least one of two condittions are true
/*
    int temp;
    std::cout << "Enter the temperature: " << '\n';
    std::cin >> temp;
    if (temp >= 0 || temp >= 30)
    {
        std::cout << "The Temperature is good!";
    }
    else
    {
        std::cout << "The temperature is bad!";
    }
    return 0;
*/

// !  = reverses the logical state of it's operand

int main()
{
    int temp;
    std::cout << "Enter the temperature: " << '\n';
    std::cin >> temp;
    if (temp >= 0 || temp >= 30)
    {
        std::cout << "The Temperature is good!";
    }
    else
    {
        std::cout << "The temperature is bad!";
    }
    return 0;
}