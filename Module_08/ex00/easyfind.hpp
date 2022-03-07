#ifndef _EASY_HPP
#define _EASY_HPP
#include <algorithm>

template <typename T>
typename T::iterator easyfind(T &tab, int toFind)
{
    typename T::iterator it = std::find (tab.begin(), tab.end(), toFind);
    if (it == tab.end())
        throw std::exception();
    return it;
}

#endif