// #include "includes/containers/map.hpp"
// #include <list>
// #include <vector>
// #include <stdlib.h>
// #include <iostream>

// #define LEAK 34
// int main (int argc, char **argv)
// {
//     ft::map<float, int> v;
//     std::list<float> lst;
//     int leak;
//     (void)(argc);
    
//     if (argc == 1)
//       return 1;
//     leak = std::atoi(argv[1]);
//     std::cout << leak << std::endl;
//     srand (15);
//     for (int i = 0; i < leak; i++)
//     {
//         float rnd = rand() % leak + 1;
//         lst.push_back(rnd);
//         v.insert(ft::map<float, int>::value_type(rnd, i));

//     }
//     for (std::list<float>::iterator it = lst.begin(); it != lst.end(); it++)
//     {
//         std::cout << *it  << " : ";
//         std::cout << v.erase(*it) << std::endl;;
//     }
// }

#include "includes/containers/map.hpp"
#include <list>
#include <vector>
#include <stdlib.h>
#include <iostream>

int main (void)
{
    ft::map<float, int> v;
    
    v.insert(ft::make_pair(4, 4));
    v.insert(ft::make_pair(1, 1));
    v.insert(ft::make_pair(8, 8));
    v.insert(ft::make_pair(6, 6));
    v.insert(ft::make_pair(5, 5));
    v.insert(ft::make_pair(3, 3));

    v.erase(4);
    v.erase(1);
    v.erase(8);
    v.erase(6);
    //v.erase(5);
    //v.erase(3);

    return (0);

}