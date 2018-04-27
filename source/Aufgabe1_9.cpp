#include <iostream>


int checksum(int const& a);

int main(){

        int a;
        std::cout<<"Ziffer eingeben:\n";
        std::cin>>a;

        std::cout<<checksum(a);
        return 0;
    }

int checksum(int const& a){


    int rest=a;
    int sum=0;

    while (rest!=0){
        sum += rest%10;
        rest = rest/10;
    }
    return sum;
}