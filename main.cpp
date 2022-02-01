#include "includes/containers/map.hpp"
#include <list>
#include <vector>
#include <stdlib.h>
#include <iostream>

#define LEAK 34
int main (int argc, char **argv)
{
    ft::map<float, int> v;
    std::list<float> lst;
    int leak;
    (void)(argc);
    
    if (argc == 1)
      return 1;
    leak = std::atoi(argv[1]);
    std::cout << leak << std::endl;
    srand (15);
    for (int i = 0; i < leak; i++)
    {
        float rnd = rand() % leak + 1;
        lst.push_back(rnd);
        v.insert(ft::map<float, int>::value_type(rnd, i));
    }
    for (std::list<float>::iterator it = lst.begin(); it != lst.end(); it++)
    {
        std::cout << *it  << " : ";
        std::cout << v.erase(*it) << std::endl;;
    }
}