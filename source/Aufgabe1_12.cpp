#include <iostream>
#include <cmath>

float volumeCylinder(float const& radius, float const& height);
float surfaceCylinder(float radius, float height);

int main(){

    float radius;
    float height;

    std::cout<<"Geben Sie den Radius an:\n";
    std::cin>>radius;
    std::cout<<"Geben Sie die Höhe an:\n";
    std::cin>>height;

    std::cout<<"Volumen:\n";
    std::cout<<volumeCylinder(radius, height);
    std::cout<<"Oberflächeninhalt:\n";
    std::cout<<surfaceCylinder(radius, height);
    return 0;
}

float volumeCylinder(float const& radius, float const& height){

    return M_PI*radius*radius*height;
}

float surfaceCylinder(float radius, float height){

    float circle = M_PI*radius*radius;
    float body = 2*M_PI*radius*height;
    return (2*circle)+body;
}