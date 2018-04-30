#define CATCH_CONFIG_RUNNER
#include "catch.hpp"
#include <iostream>
#include <string>

double mileToKilometer(double const& mile){

    return mile/0.62137f;

}

int main(int argc, char* argv[]){

    double miles = 0.0f;

    std::cout<<"Geben Sie die Strecke in Meilen ein: ";

    //try-catch-Block für Ausnahmen der Funktion
    try{
        std::cin>>miles;
        std::cout<<mileToKilometer(miles);
    }catch(std::exception e){
        std::cout<<"Wrong format! Type in 0.0\n";
    }

    return Catch::Session().run(argc, argv);
}