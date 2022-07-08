#include <cmath>
#include <iostream>

int main (void)
{
  double db_large_integer = std::pow (2., 64.);
  std::cout << "db_large_integer: " << db_large_integer << std::endl;
  uint64_t ui64_large_integer = db_large_integer;
  std::cout << "ui64_large_integer: " << ui64_large_integer << std::endl;
  return 0;
}