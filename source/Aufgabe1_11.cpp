#include <iostream>

float fract(float const& a);

int main(){

    float a;
    std::cout<<"Gleitkommazahl eingeben:\n";
    std::cin>>a;

    std::cout<<fract(a);
    return 0;
}

float fract(float const& a){
    int temp = a;
    return a-temp;
}