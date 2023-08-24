#include "Span.hpp"

Span::Span(){
    std::cout << "Default constructor called" << std::endl;
    n = 0;
}

Span::Span(unsigned int N){
    std::cout << "Constructor Called" << std::endl;
    n = N;
}

Span::Span(const Span& spn){
    std::cout << "Copy Constructor Called" << std::endl;
    *this = spn;
}

Span::~Span(){
    std::cout << "Destructor called" << std::endl;
}

Span& Span::operator=(const Span& spn){
    std::cout << "Copy Assignement Operator Called" << std::endl;
    if ( this != &spn ) {
        this->n = spn.n;
        this->stock = spn.stock;
    }
    return *this;
}

void Span::addNumber(int num){
    if(stock.size() < n)
        stock.push_back(num);
    else
        throw ContainerFilled();
}

int Span::shortestSpan(){
    int dist = 0;
    if(n <= 1)
        throw NoSpan();
    else{
        std::list<int>::iterator it = stock.begin();
        std::list<int>::iterator temp;
        while(it != stock.end())
        {
            temp = it;
            it++;
            if(dist == 0)
                dist =std::abs(*temp - *it);
            else if(std::abs(*temp - *it) < dist)
                dist = std::abs(*temp - *it);
        }
    }
    return (dist);
}

int Span::longestSpan(){
    int dist = 0;
    if(n <= 1)
        throw NoSpan();
    else{
        std::list<int>::iterator it = stock.begin();
        std::list<int>::iterator temp;
        while(it != stock.end())
        {
            temp = it;
            it++;
            if(std::abs(*temp - *it) > dist)
                dist = std::abs(*temp - *it);
        }
    }
    return dist;
}

const char* Span::ContainerFilled::what()const throw(){
    return "container is filled no more space left";
}

const char* Span::NoSpan::what() const throw(){
    return "not enough elements to calculate distance";
}
