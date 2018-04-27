#include iostream

int checksum(int const& a){

    int rest=a;
    int sum=0;

    while (rest!=0){
        sum += rest%10;
        rest = rest/10;
    }
    return sum;
}