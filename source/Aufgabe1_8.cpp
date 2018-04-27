#include <iostream>

int gcd(int const& a, int const& b);

int main(){

    int a;
    int b;
    std::cout<<"Erste Ziffer eingeben:\n";
    std::cin>>a;
    std::cout<<"Zweite Ziffer eingeben:\n";
    std::cin>>b;

    std::cout<<gcd(a,b);
    return 0;
}

int _ergebnis = 0;
int _rest = 0;
int _temp = 0;

int gcd(int const& a, int const& b)
{
    if(a>b){
        _ergebnis = b;
        _rest = a%b;
    }
    else if(a<b){
        _ergebnis = a;
        _rest = b%a;
    }

    if(_rest == 0){
        return _ergebnis;
    }
    return gcd(b,_rest);
}