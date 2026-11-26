#include "whatever.hpp"
#include <iostream>
#include <string>

int main(void)
{
    int a = 10;
    int b = 100;

    std::cout << "=============== SWAP ===============" << std::endl;
    std::cout << "Valeur de A: " << a << std::endl;
    std::cout << "Valeur de B: " << b << std::endl;
    ::swap(a, b);
    std::cout << "Valeur de A post swap: " << a << std::endl;
    std::cout << "Valeur de B post swap: " << b << std::endl;

    std::cout << "=============== MIN ===============" << std::endl;
    std::cout << "Valeur de A: " << a << " / Addy: " << &a << std::endl;
    std::cout << "Valeur de B: " << b << " / Addy: " << &b << std::endl;
    std::cout << "Plus petite valeur entre les deux: " << ::min(a, b) << " / Addy: " << &::min(a, b) << std::endl;

    std::cout << "=============== MAX ===============" << std::endl;
    std::cout << "Valeur de A: " << a << " / Addy: " << &a << std::endl;
    std::cout << "Valeur de B: " << b << " / Addy: " << &b << std::endl;
    std::cout << "Plus grande valeur entre les deux: " << ::max(a, b) << " / Addy: " << &::max(a, b) << std::endl;

    std::cout << "=============== EGALITE ===============" << std::endl;
    int c = 42;
    int d = 42;
    std::cout << "Valeur de C: " << c << " / Addy: " << &c << std::endl;
    std::cout << "Valeur de D: " << d << " / Addy: " << &d << std::endl;
    std::cout << "min(c, d) / Addy: " << &::min(c, d) << std::endl;
    std::cout << "max(c, d) / Addy: " << &::max(c, d) << std::endl;
    if (&::min(c, d) == &d)
        std::cout << "min renvoie le 2e : OK" << std::endl;
    else
        std::cout << "min renvoie le 2e : KO" << std::endl;
    if (&::max(c, d) == &d)
        std::cout << "max renvoie le 2e : OK" << std::endl;
    else
        std::cout << "max renvoie le 2e : KO" << std::endl;

    std::cout << "=============== STRINGS ===============" << std::endl;
    std::string s1 = "chaine1";
    std::string s2 = "chaine2";
    ::swap(s1, s2);
    std::cout << "s1 = " << s1 << ", s2 = " << s2 << std::endl;
    std::cout << "min(s1, s2) = " << ::min(s1, s2) << std::endl;
    std::cout << "max(s1, s2) = " << ::max(s1, s2) << std::endl;

    return (0);
}