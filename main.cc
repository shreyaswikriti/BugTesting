#include <complex>
#include <limits>
#include <iostream>

int
main (int argc, char *argv[])
{
  double x = 10.0;
  std::complex<double> y{std::numeric_limits<double>::infinity (), 1.0};

  std::complex<double> z1 = std::pow (x, y);
  std::complex<double> z2 = std::pow (std::complex<double> (x), y);
  std::complex<double> z3 = std::exp (y * std::log (x));
  std::complex<double> z4 = std::exp (y * std::log (std::complex<double> (x)));

  std::cout << z1 << ", "
            << z2 << ", "
            << z3 << ", "
            << z4 << std::endl;
}