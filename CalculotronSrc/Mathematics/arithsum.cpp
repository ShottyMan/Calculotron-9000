#include "..//MainHeader.hpp"

double arithsum(double n,
double u1, double d)
{

double a;

a = (n/2)*((2*u1)+((n-1)*d));

std::cout << a;

return a;
}