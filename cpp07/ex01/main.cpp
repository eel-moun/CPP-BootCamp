#include "Iter.hpp"

int main() {
    const int test1[10] = {45,21,47,86,977,45,33,12,14,57};

    Iter(test1,10,&print);

    std::cout << "2nd --------------" << std::endl;
    int test2[10] = {45,21,47,86,977,45,33,12,14,57};
    Iter(test2,10,&print);
    std::cout << "3d --------------" << std::endl;

    const char test3[3] = {'a','b','c'};

    Iter(test3,3,&print);
    
}