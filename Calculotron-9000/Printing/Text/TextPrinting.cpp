#include "TextHeader.hpp"

#include "../../MainHeader.hpp"


namespace Text {

    void Print(const char* z)
    {
        std::cout << z << std::endl;
    }

    void Printline(const char* z)
    {
        std::cout << z;
    }

    void endl()
    {
        std::cout << std::endl;
    }

}
void ClearScreen()
{
#if defined _WIN32
    system("cls");
#elif defined (__LINUX__) || defined(__gnu_linux__) || defined(__linux__)
    system("clear")
#endif none
}