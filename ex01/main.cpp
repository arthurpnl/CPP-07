#include "iter.hpp"
#include <iostream>
#include <string>

void printInt(const int &x)
{
    std::cout << x << std::endl;
}

template <typename T>
void print(const T &x)
{
    std::cout << x << std::endl;
}

void increment(int &x)
{
    x++;
    std::cout << x << std::endl;
}

int main(void)
{
    int tab[3] = {1, 2, 3};
    const int ctab[3] = {1, 2, 3};
    std::cout << "==========PRINT==========" << std::endl;
    ::iter(tab, 3, printInt);
    std::cout << "==========INCREMENT==========" << std::endl;
    ::iter(tab, 3, increment);
    std::cout << "==========TEMPLATE==========" << std::endl;
    ::iter(tab, 3, print<int>);
    std::cout << "==========CONST TAB==========" << std::endl;
    ::iter(ctab, 3, print<int>);
    // ::iter(ctab, 3, increment); // 
    std::cout << "==========STRINGS==========" << std::endl;
    std::string strs[2] = {"hello", "world"};
    ::iter(strs, 2, print<std::string>);
    return (0);
}