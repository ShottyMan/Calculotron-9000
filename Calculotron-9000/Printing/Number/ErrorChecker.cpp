#include "../../MainHeader.hpp"

namespace Number
{

    namespace interger {
        void ErrorCheckerRange(int& a, int b)
        {
            while (1)
            {
                if (std::cin.fail())
                {
                    std::cin.clear();
                    std::cin.ignore(INT16_MAX, '\n');

                    std::cout << "error wrong input(Out of interger range, or using strings): ";
                    std::cin >> a;
                }

                if (a > b) { Text::Printline("Value out of range, range is 1-"); Number::Print(b); std::cin >> a; }

                if (a <= 0) { Text::Printline("Value out of range, range is 1-"); Number::Print(b); std::cin >> a; }

                if (!std::cin.fail() && a <= b && a > 0) { break; }
            }
        }
        void ErrorCheckerNumber(int& a)
        {

            while (1)
            {
                if (std::cin.fail())
                {
                    std::cin.clear();
                    std::cin.ignore(INT16_MAX, '\n');

                    std::cout << "error wrong input or using strings: ";
                    std::cin >> a;
                }

                if (!std::cin.fail()) { break; }


            }
        }



    }
    namespace dble
    {

        void ErrorCheckerNumber(double& a)
        {
            while (1)
            {
                if (std::cin.fail())
                {
                    std::cin.clear();
                    std::cin.ignore(INT16_MAX, '\n');

                    std::cout << "error wrong input(Out of interger range, or using strings): ";
                    std::cin >> a;
                }

                if (!std::cin.fail()) { break; }


            }

        }
    }
}