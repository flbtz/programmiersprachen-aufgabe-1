#include <iostream>
#include <cmath>

bool is_prime(int const& x);

int main(){

    int x;
    std::cout<<"Geben Sie eine Zahl ein:\n";
    std::cin>>x;

    std::cout<<is_prime(x);
    return 0;

}

bool is_prime(int const& x){

    if(x<=2){
        return (x == 2);
    }
    for(long i = 2; i<x; i++)
    {
        if(x % i == 0){
            return false;
        }
    }
    return true;
}