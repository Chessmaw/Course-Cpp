#include <iostream>

int main(){
    int correct = 8;
    int question = 10;
    double source = correct/(double)question * 100;
    std::cout<<"Result : "<<'\n'<<source<<"%";
    return 0;
}
// This convert the type date  --(double)question
// double source = correct/(double)question * 100;