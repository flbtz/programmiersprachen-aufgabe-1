#include <iostream>

int sumMultiples(int const& a);

int main(){

    int a;
    std::cout<<"Ziffer eingeben:\n";
    std::cin>>a;

    std::cout<<sumMultiples(a);
    return 0;
}

int sumMultiples(int const& a){

    int sum = 0;

    for (int i =1; i<=a; i++)
    {
        if(i%3==0||i%5==0){
            sum += i;
        }
    }
    return sum;
}