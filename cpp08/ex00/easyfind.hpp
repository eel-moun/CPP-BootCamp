#ifndef EASYFIND_HPP
#define EASYFIND_HPP
#include <iostream>
#include <algorithm>
#include <array>

template <typename T> 
int* easyfind(T& arr, int i){
    int* it;
    it = std::find(arr.begin(), arr.end(), i);

    if(it != arr.end())
        return(it);
    return(NULL);
}

#endif