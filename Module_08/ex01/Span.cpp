#include "Span.hpp"

Span::Span(unsigned int n) : _n(n)
{
}

Span::Span(const Span& other) :_n(other._n), _vec(other._vec)
{
}

Span& Span::operator = (const Span& other)
{
    _vec = other._vec;
    _n = other._n;
    return *this;
}

void Span::addNumber(int num)
{
    if (_n)
    {
        _vec.push_back(num);
        _n--;
    }
    else
        throw std::out_of_range("out of range");
}



int Span::longestSpan()
{
    std::vector<int>::iterator start = _vec.begin();
    std::vector<int>::iterator end = _vec.end();
    std::sort(start, end);
    return _vec.back() - *start;
}

int Span::shortestSpan()
{
    if (_vec.size() <= 1)
        throw std::out_of_range("no span can be found");
    std::vector<int>::iterator start = _vec.begin();
    std::vector<int>::iterator end = _vec.end();
    std::sort(start, end);

    std::vector<int>::iterator start2 = start;
    start2++;

    int tmp;
    int diff = *start2 - *start;
    while (start2 != end)
    {
        tmp = *start2 - *start;
        if (tmp < diff)
            diff = tmp;
        start2++;
        start++;
    }
    return diff;
}


Span::~Span()
{
}