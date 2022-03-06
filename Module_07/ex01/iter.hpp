#ifndef _ITER_HPP
#define _ITER_HPP

template <typename A, typename L>
void iter(A* tab, L len, void func(A const &))
{
    for (L i = 0; i < len; i++)
    {
        func(tab[i]);
    }
}

#endif