#include <iostream>

int kleinsterTeiler(int const& a, int const& b);

int main()
{
    int a;
    int b;
    std::cout<<"Untere Grenze eingeben:\n";
    std::cin>>a;
    std::cout<<"Obere Grenze eingeben:\n";
    std::cin>>b;

    std::cout<<kleinsterTeiler(a,b);
    return 0;
}

//returns the smallest number, which is aliquot by a...b
int kleinsterTeiler(int const& a, int const& b){

    int ergebnis;
    int j = 0;
    int i = 1;
    bool end = false;

    //Logic
    while(!end){

        j = j+b;
        i = 0;
        while(i < b)
        {
            i++;
            if (j % i != 0)
            {
                break;
            }
        }

        if (i == b)
        {
            end = true;
        }
    }

    ergebnis = j;

    return ergebnis;
}