# define CATCH_CONFIG_RUNNER
# include "catch.hpp"
# include <cmath>
#include <string>

int _ergebnis = 0;
int _rest = 0;
int _temp = 0;

//aufgabe 1.8
        //Funktion für ggt
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

//TDD für ggt
TEST_CASE ("describe_gcd", "[gcd]")
{
REQUIRE (gcd (2 ,4)==2);
REQUIRE (gcd (9 ,6)==3);
REQUIRE (gcd (3 ,7)==1);
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

TEST_CASE ("describe_checksum", "[checksum]"){

    REQUIRE(checksum(5)==5);
    REQUIRE(checksum(123)==6);
    REQUIRE(checksum(2971)==19);
}

int main (int argc , char * argv [])
{
    return Catch :: Session (). run( argc , argv );
}