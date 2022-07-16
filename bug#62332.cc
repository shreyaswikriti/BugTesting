#include <iostream>
#include <cmath>
#include <complex>
#define cosd(x) (cos((x) * M_PI / 180))
int main()
{
    for(int i=1;i<=20;i++) 
    { std::complex<double> x( cosd(45) , std::pow(10, -3*i) );
    std::cout << real(x)<<"+"<<imag(x)<<"i"<<"-->"<<real(acos(x))<<"+"<<imag(acos(x))<<"i"<< std::endl ;}
}