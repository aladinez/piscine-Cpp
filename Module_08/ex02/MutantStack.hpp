#ifndef _MSTACK_HPP
#define _MSTACK_HPP
#include <stack>


template <typename T>
class MutantStack : public std::stack<T>
{
public:
    typedef typename std::stack<T>::container_type::iterator    iterator;

    iterator begin();
    iterator end();

    MutantStack();
    MutantStack(const MutantStack& other);
    MutantStack& operator = (const MutantStack& other);

    ~MutantStack();
};

template <class T>
MutantStack<T>::MutantStack()
{
}

template <class T>
MutantStack<T>::~MutantStack()
{
}

template <class T>
MutantStack<T>::MutantStack(const MutantStack& other)
{
    *this = other;
}

template <class T>
MutantStack<T>& MutantStack<T>::operator = (const MutantStack& other)
{
    this->c = other.c;
    return *this;
}


template <class T>
typename MutantStack<T>::iterator MutantStack<T>::begin()
{
    return this->c.begin();
}

template <class T>
typename MutantStack<T>::iterator MutantStack<T>::end()
{
    return this->c.end();
}



#endif