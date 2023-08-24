#ifndef MUTANSTACK_HPP
#define MUTANSTACK_HPP
#include <iostream>
#include <algorithm>
#include <stack>
#include <deque>

template< typename T, class Container = std::deque<T> > 
class MutantStack:public std::stack<T, Container>{
    public:
        MutantStack();
        MutantStack(MutantStack& m_stack);
        ~MutantStack();

        MutantStack& operator = (MutantStack& mtstack);
        typedef typename Container::iterator iterator;

        iterator    begin();
        iterator    end();

};

template< typename T, class Container> 
MutantStack<T,Container>::MutantStack(){
    std::cout << "Default Constructor Called" << std::endl;
}

template< typename T, class Container> 
MutantStack<T,Container>::~MutantStack(){
    std::cout << "Default Destructor Called" << std::endl;
}

template< typename T, class Container> 
MutantStack<T,Container>::MutantStack(MutantStack& m_stack){
    std::cout << "Copy Constructor Called" << std::endl;
    *this = m_stack;
}

template< typename T, class Container> 
MutantStack<T,Container>& MutantStack<T,Container>::operator = (MutantStack& mtstack){

        std::stack<T,Container>::operator=(mtstack);
        return *this;
}

template< typename T, class Container> 
typename MutantStack<T, Container>::iterator MutantStack<T,Container>::begin(){
    return this->c.begin();
}

template< typename T, class Container> 
typename MutantStack<T,Container>::iterator MutantStack<T,Container>::end(){
    return this->c.end();
}

#endif