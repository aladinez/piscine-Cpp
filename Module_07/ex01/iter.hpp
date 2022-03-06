#ifndef _ITER_HPP
#define _ITER_HPP

template <typename A, typename L, typename F>
void iter(A* tab, L len, F func)
{
    for (L i = 0; i < len; i++)
    {
        func(tab[i]);
    }
}

#endif