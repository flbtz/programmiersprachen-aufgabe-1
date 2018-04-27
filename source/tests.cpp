# define CATCH_CONFIG_RUNNER
# include "catch.hpp"
# include <cmath>
#include <string>

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

TEST_CASE ("describe_gcd", "[gcd]")
{
REQUIRE (gcd (2 ,4) == 2);
REQUIRE (gcd (9 ,6) == 3);
REQUIRE (gcd (3 ,7) == 1);
}
int main (int argc , char * argv [])
{
    return Catch :: Session (). run( argc , argv );
}