#include "../MainHeader.hpp"

void xinter(double a, double b, double c, double& xin1, double& xin2)
{
  double tempapw2;

  tempapw2 = pow(b, 2);

  xin1 = ((0 - b) - sqrt(( tempapw2 -(4 * a * c))))/(2*a);

  xin2 = ((0 - b) + sqrt(( tempapw2 -(4 * a * c))))/(2*a);

}