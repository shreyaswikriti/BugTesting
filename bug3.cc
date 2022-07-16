#include <iostream>
#include <complex>
#include <cmath>
int main()
{
    
    std::complex<double> x = std::complex<double>( 0,0 ) ;
    std::complex<double> y = std::complex<double>(-1.904e-01, +0);
    std::complex<double> z = std::complex<double>(-1.904e-01 ,- 9.518e-80 )  ;
    std::complex<double> rho = sqrt(x * x + y * y + z * z);
    std::cout << "phi ="<< acos( z / rho ) << std::endl ;
}