#include "includes/containers/map.hpp"

int main (void)
{
    ft::map<std::string, std::string> m1;
    ft::map<std::string, std::string> m2;

    std::cout << (m1 == m2) << std::endl;
}
