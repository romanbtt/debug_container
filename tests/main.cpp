/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romanbtt <marvin@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 16:21:46 by romanbtt          #+#    #+#             */
/*   Updated: 2021/10/28 23:37:36 by romanbtt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.hpp"
#include <typeinfo>

// Dispatch Tests

void    dispatch_containers(char *argv)
{
    switch(argv[1]) {
    case '1':
        dispatch_vector(argv);
        break;
    case '2':
        dispatch_map(argv);
        break;
    case '3':
        dispatch_stack(argv);
        break;
    case '4':
        dispatch_set(argv);
        break;
    default:
        return;
    }
}

void    dispatch_iterators(char *argv)
{
    switch(argv[1]) {
    case '1':
        dispatch_random_access(argv);
        break;
    case '2':
        dispatch_random_access_reverse(argv);
        break;
    case '3':
        dispatch_bidirectional(argv);
        break;
    case '4':
        dispatch_bidirectional_reverse(argv);
        break;
    default:
        return;
    }
}

void    dispatch_tests(char **argv)
{
    switch(argv[1][0]) {
    case '1':
        dispatch_containers(argv[1]);
        break;
    case '2':
        dispatch_iterators(argv[1]);
         break;
    case '3':
        test_subject(argv[2]);
        break;
    default:
        return;
    }
}

int main( int argc, char *argv[] )
{
    if (argc < 2 || argc > 3)
        return (1);
    else
        dispatch_tests(argv);
    return (0);
}
