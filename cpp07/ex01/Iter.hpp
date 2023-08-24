#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>
template <typename T> void Iter(T* addrs, size_t length, void (*f)(const T&)){
    for(size_t i = 0; i < length; i++)
        f(addrs[i]);
}

template <typename T>void print(const T& tacos){
    std::cout << tacos << std::endl;
}

#endif