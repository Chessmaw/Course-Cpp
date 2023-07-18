#include <iostream>

int main(){
    int age;
    std::cout<<"Enter your age: ";
    std::cin>>age;

    if(age >=18){
        //Tu eres viejo
        std::cout<<"You are old";
    }
    else if(age >= 100){
        std::cout<<"You are not real";
    }
    else if(age <=  0){
        //Tu aun no has nacido videjo/a
        std::cout<<"You haven't old been born yet!";
    }
    else{
        //Tu eres joven
        std::cout<<"You are young";
    }
}