#include <iostream>
#include <string>

int binomial(int const& n, int const& k);

int main(){

    int n;
    int k;
    std::cout<<"Geben Sie die erste Ziffer ein:\n";
    std::cin>>n;
    std::cout<<"Geben Sie die zweite Ziffer ein:\n";
    std::cin>>k;

    std::cout<<binomial(n, k);
    return 0;
}

int prod = 1;

int factorial(int n) {

    if (n - 1 == 0) {
        int ergebnis = prod;
        prod = 1;
        return ergebnis;
    }

    prod = prod * n;

    return factorial(n - 1);
}

int binomial(int const& n, int const& k)
{
    int divident = factorial(n);
    int divisor = factorial(k)*factorial(n-k);

    return divident/divisor;
}

