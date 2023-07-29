#include <iostream>

int main()
{
    double temp;
    char unit;
    std::cout << "***** Temperature Conversion *****\n";
    std::cout << "F = Fahrenheit\n";
    std::cout << "C = Celsius\n";
    std::cout << "What unit would you like to convert to:  ";
    std::cin >> unit;
    std::cout << "**********************************\n";
    if (unit == 'F' || unit == 'f')
    {
        std::cout << "Enter the temperature in Celsius:  ";
        std::cin >> temp;
        temp = (1.8 * temp) + 32.0;
        std::cout << "Temperature is: " << temp << "F";
    }
    else if (unit == 'C' || unit == 'c')
    {
        std::cout << "Enter the temperature in Fahrenheit:  ";
        std::cin >> temp;
        temp = (temp - 32) / 1.8;
        std::cout << "Temperature is: " << temp;
    }
    else
    {
        std::cout << "Please enter in only C or F\n";
    }
    return 0;
}