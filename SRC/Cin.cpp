#include <windows.h>
#include <iostream>


int main(){
    //Variables
    std::string name;
    int age;
    //This it has a problem because this not accept spaces 
    std::cout<<"What's your name? "<<'\n';
    std::getline(std::cin , name);
    std::cout<< "What's your age? "<<"Years old";
    std::cin>>age;

    std::cout<<"Hello "<<name<<'\n';
    std::cout<<"You are "<<age<<" Years old ";
    return 0;
}