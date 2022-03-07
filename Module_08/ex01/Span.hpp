#ifndef _SPAN_HPP
#define _SPAN_HPP
#include <algorithm>
#include <vector>
#include <iterator>
#include <iostream>


class Span
{
private:
    unsigned int _n;
    std::vector<int> _vec;
public:
    Span(unsigned int);
    Span(const Span& other);
    Span& operator = (const Span& other);
    void addNumber(int num);
    template <typename T>
    void addNumber(T first, T last);
    int longestSpan();
    int shortestSpan();

    ~Span();
};

template <class T>
void Span::addNumber(T first, T last)
{
    while (first != last)
    {
        if (_n == 0)
            throw std::out_of_range("out of range");
        _vec.push_back(*first);
        first++;
        _n--;
    }
}


#endif