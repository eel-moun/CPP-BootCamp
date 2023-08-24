#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include <exception>

template<typename T> 
class Array{
    private:
        T* array;
        unsigned int arr_size;


    public:
        Array();
        Array(unsigned int N);
        Array(Array& arr);
        ~Array();

        unsigned int size() const;
        Array& operator = (Array& arr);
        T& operator[](int i);

        class outOfBounds: public std::exception{
            public:
                virtual const char *what() const throw();
        };
};

template<typename T> 
Array<T>::Array(){
    std::cout << "Default Constructor Called" << std::endl;
    array = new T[0];
    arr_size = 0;
}

template<typename T>
Array<T>::Array(unsigned int N){
    std::cout << "Constructor Called" << std::endl;
    array = new T[N];
    arr_size = N;
}

template<typename T>
Array<T>::Array(Array& arr){
    std::cout << "Copy Constructor Called" << std::endl;
    unsigned int i = 0;

    arr_size = arr.arr_size;
    array = new T[arr_size];
    while(i < arr_size)
    {
        array[i] = arr.array[i];
        i++;
    }
}

template<typename T>
Array<T>::~Array(){
    std::cout << "Destructor Called" << std::endl;
    delete[] array;
}

template<typename T>
unsigned int Array<T>::size() const{
    return (arr_size);
}

template<typename T>
Array<T>& Array<T>::operator= (Array& arr){
    std::cout << "Copy Assignement Operator Called" << std::endl;
    unsigned int i = 0;
    
    if(this != &arr)
    {
        delete[]array;
        arr_size = arr.arr_size;
        array = new T[arr_size];
    }
    while(i < arr_size)
    {
        array[i] = arr.array[i];
        i++;
    }
    return *this;
}

template <typename T>
const char * Array<T>::outOfBounds::what() const throw(){
    return "number out of bounds";
}

template <typename T> 
T& Array<T>::operator[] (int i){
    if(i >= 0 && i < (int)arr_size)
        return(array[i]);
    else
        throw outOfBounds();
}

#endif