#include "easyfind.hpp"

int main(){
    std::array<int ,7> arr = {12, 13,8,4,6,7,9};
    std::cout << easyfind(arr, 9) << std::endl;
    std::cout << arr.begin() << std::endl;
    std::cout << arr.back() << std::endl;
    std::cout << arr.end() << std::endl;
    return (0);
}