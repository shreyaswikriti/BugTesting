#include <iostream>
#include <complex>
int main()
{
    typedef typename std::complex<double> Complex;
    Complex x = Complex( 0,0 ) ;
    Complex y = Complex(-1.904e-01, +0);
    Complex z = Complex(-1.904e-01 ,- 9.518e-80 )  ;
    Complex rho = sqrt(x * x + y * y + z * z);
    std::cout << "phi ="<< acos( z / rho ) << std::endl ;
}