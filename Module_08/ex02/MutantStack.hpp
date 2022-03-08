#ifndef _MSTACK_HPP
#define _MSTACK_HPP
#include <stack>


template <class T>
class MutantStack : public std::stack<T>
{
private:
    /* data */
public:
    typedef std::stack<T>::c    iterator;

    auto begin() { return std::begin(c); }
    auto end() { return std::end(c); }

    MutantStack(/* args */);
    ~MutantStack();
};

template <class T>
MutantStack<T>::MutantStack(/* args */)
{
}

template <class T>
MutantStack<T>::~MutantStack()
{
}


#endif