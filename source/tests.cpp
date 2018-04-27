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

//Aufgabe 1.9
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

//Aufgabe 1.10
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

TEST_CASE ("describe_sumMultiples","[sumMultiples]")
{
    REQUIRE(sumMultiples(20)==98);
    REQUIRE(sumMultiples(1000)==234168);
}

//Aufgabe 1.11
