#include <iostream>

int main(){
    std::cout<<"***********Calculator***********"<<'\n';
    char op;
    double N1;
    double N2;
    double result;
    std::cout<<"Enter Number #1 : "<<'\n';
    std::cin>>N1;
    std::cout<<"Enter Number #2 : "<<'\n';
    std::cin>>N2;
    std::cout<<"Chose ( + - * / ):  ";
    std::cin>>op;
    std::cout<<"********************************"<<"\n";
    switch (op)
    {
    case '+':
        result = N1 + N2;
        std::cout<<"Result "<<result<<"\n";
        break;
    case '-':
        result = N1 - N2;
        std::cout<<"Result "<<result<<"\n";
        break;
    case '*':
        result = N1 * N2;
        std::cout<<"Result "<<result<<"\n";
        break;
    case '/':
        result = N1 / N2;
        std::cout<<"Result "<<result<<"\n";
        break;
    
    default:
    std::cout<<"You did not chose an operator";
        break;
    }
}