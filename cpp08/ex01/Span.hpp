#ifndef SPAN_HPP
#define SPAN_HPP
#include <iostream>
#include <list>
#include <algorithm>
#include <exception>
#include <iterator>

class Span{
    private:
        std::list <int> stock;
        unsigned int n;
    
        Span();
    public:
        Span(unsigned int N);
        Span(const Span& spn);
        ~Span();

        Span& operator= (const Span& spn);

        void addNumber(int num);
        
        int shortestSpan();
        int longestSpan();

        class ContainerFilled:public std::exception{
            public:
                virtual const char * what() const throw();
        };
        class NoSpan:public std::exception{
            public:
                virtual const char * what() const throw();
        };
};

#endif