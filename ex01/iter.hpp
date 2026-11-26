#ifndef ITER_HPP
#define ITER_HPP

#include <cstddef>

template <typename T, typename F>
void iter(T *array, size_t len, void (*f)(F &))
{
    size_t i = 0;
    while(i < len)
    {
        f(array[i]);
        i++;
    }
}

#endif