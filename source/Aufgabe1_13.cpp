#include <iostream>

int factorial(int const& a);

int main(){

    int a;
    std::cout<<"geben Sie eine natürliche Zahl ein:\n";
    std::cin>>a;

    std::cout<<factorial(a);
    return 0;
}

int prod = 1;

int factorial(int const& a){

    if(a-1==0){
        int ergebnis = prod;
        prod = 1;
        return ergebnis;
    }

    prod = prod * a;

    return factorial(a-1);
}