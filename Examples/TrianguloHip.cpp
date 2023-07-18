#include <iostream>
#include <math.h>

int main(){
    //Variables
    double A ;
    double B ;
    double C ; 
    //Side of A
    std::cout<<"Enter side A: ";
    std::cin>> A ;
    //Side of B
    std::cout<<"Enter side B: ";
    std::cin>>B;
    //Side of is C

    A = pow(A,2);
    B = pow(B,2);
    C = sqrt(A + B);

    std::cout<<"side C:  "<<C ;
    return 0;
}