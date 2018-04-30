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
float fract(float const& a){
    int temp = a;
    return a-temp;
}

TEST_CASE ("describe_fract","[fract]")
{
    REQUIRE(fract(2.478)==Approx(0.478));
}

//Aufgabe 1.12
float volumeCylinder(float const& radius, float const& height){

    return M_PI*radius*radius*height;
}

float surfaceCylinder(float radius, float height){

    float circle = M_PI*radius*radius;
    float body = 2*M_PI*radius*height;
    return (2*circle)+body;
}

TEST_CASE ("describe_volumeCylinder","[volumeCylinder]")
{
    REQUIRE(volumeCylinder(3.0f,6.0f)==169.6460032938f);
}

TEST_CASE ("describe_surfaceCylinder","[surfaceCylinder]")
{
    REQUIRE(surfaceCylinder(3.0f,6.0f)==169.6460032938f);
}

//Aufgabe 1.13
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

TEST_CASE ("describe_factorial","[factorial]")
{
    REQUIRE(factorial(10)==3628800);
    REQUIRE(factorial(6)==720);
}

//Aufgabe 1.14
int binomial(int const& n, int const& k)
{
    int divident = factorial(n);
    std::cout<<divident;
    int divisor = factorial(k)*factorial(n-k);
    std::cout<<divisor;

    return divident/divisor;
}

TEST_CASE ("describe_binomial","[binomial]")
{
    REQUIRE(binomial(10,6)==210);
}

//Aufgabe 1.15
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

TEST_CASE ("describe_is_prime","[is_prime]")
{
    REQUIRE(is_prime(5));
    REQUIRE(!is_prime(15));
    REQUIRE(!is_prime(561));
}

int main(int argc, char* argv[])
{
    return Catch::Session().run(argc, argv);
}