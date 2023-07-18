#include <iostream>

namespace first{
    int x = 1;
}

namespace second{
    int x = 2;
}

int main(){
    //This's manual
    std::cout<<second::x;
    return 0;
}
/*
namespace first{
    int x = 1;
}

namespace second{
    int x = 2;
}

int main(){
    using namespace second;
    std::cout<<x;
    return 0;
}
*/