/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_largetests.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iwillens <iwillens@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/02 12:38:58 by iwillens          #+#    #+#             */
/*   Updated: 2022/01/02 12:38:59 by iwillens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAP_LARGETESTS_HPP
# define MAP_LARGETESTS_HPP

# include "map_tests.hpp"
# include <list>

template <typename T>
std::string map_large_find_rnd3()
{
	T v;
	std::vector<std::string> lst;

	srand (20);
	for (int i = 0; i < ft::Tester::large_number; i++)
	{
		std::string rnd = randomString(10);
		lst.push_back(rnd);
		v.insert(typename T::value_type(rnd, i));
	}
	for (int i = 0; i < ft::Tester::large_number; i++)
		v.find(lst[rand() % lst.size()]);
	std::string s = map_attributes<T>(v);
	return (ft::Tester::Return(s));
}

template <typename T>
std::string map_large_find_rnd2()
{
	T v;
	std::vector<float> lst;

	srand (15);
	for (int i = 0; i < ft::Tester::large_number; i++)
	{
		float rnd = rand() % ft::Tester::large_number + 1;
		lst.push_back(rnd);
		v.insert(typename T::value_type(rnd, i));
	}
	for (int i = 0; i < ft::Tester::large_number; i++)
		v.find(lst[rand() % lst.size()]);
	std::string s = map_attributes<T>(v);
	return (ft::Tester::Return(s));
}

template <typename T>
std::string map_large_find_rnd1()
{
	T v;
	std::vector<int> lst;

	srand (1);
	for (int i = 0; i < ft::Tester::large_number; i++)
	{
		int rnd = rand() % ft::Tester::large_number + 1;
		lst.push_back(rnd);
		v.insert(typename T::value_type(rnd, i));
	}
	for (int i = 0; i < ft::Tester::large_number; i++)
		v.find(lst[rand() % lst.size()]);
	std::string s = map_attributes<T>(v);
	return (ft::Tester::Return(s));
}

template <typename T>
std::string map_large_find_seq2()
{
	T v;
	for (int i = ft::Tester::large_number; i > 0; i--)
		v.insert(typename T::value_type(i, i));
	for (int i = 0; i < ft::Tester::large_number; i++)
		v.find(i + 1);
	std::string s = map_attributes<T>(v);
	return (ft::Tester::Return(s));
}

template <typename T>
std::string map_large_find_seq1()
{
	T v;
	for (int i = 0; i < ft::Tester::large_number; i++)
		v.insert(typename T::value_type(i, i));
	for (int i = ft::Tester::large_number; i > 0; i--)
		v.find(i - 1);
	std::string s = map_attributes<T>(v);
	return (ft::Tester::Return(s));
}

template <typename T>
std::string map_large_erase_rnd3()
{
	T v;
	std::list<std::string> lst;

	srand (20);
	for (int i = 0; i < ft::Tester::large_number; i++)
	{
		std::string rnd = randomString(10);
		lst.push_back(rnd);
		v.insert(typename T::value_type(rnd, i));
	}
	for (std::list<std::string>::iterator it = lst.begin(); it != lst.end(); it++)
		v.erase(*it);
	std::string s = map_attributes<T>(v);
	return (ft::Tester::Return(s));
}

template <typename T>
std::string map_large_erase_rnd2()
{
	T v;
	std::list<float> lst;

	srand (15);
	for (int i = 0; i < ft::Tester::large_number; i++)
	{
		float rnd = rand() % ft::Tester::large_number + 1;
		lst.push_back(rnd);
		v.insert(typename T::value_type(rnd, i));
	}
	for (std::list<float>::iterator it = lst.begin(); it != lst.end(); it++)
	{
		v.erase(*it);
	}
		
	std::string s = map_attributes<T>(v);
	return (ft::Tester::Return(s));
}

template <typename T>
std::string map_large_erase_rnd1()
{
	T v;
	std::list<int> lst;

	srand (1);
	for (int i = 0; i < ft::Tester::large_number; i++)
	{
		int rnd = rand() % ft::Tester::large_number + 1;
		lst.push_back(rnd);
		v.insert(typename T::value_type(rnd, i));
	}
	for (std::list<int>::iterator it = lst.begin(); it != lst.end(); it++)
		v.erase(*it);
	std::string s = map_attributes<T>(v);
	return (ft::Tester::Return(s));
}



template <typename T>
std::string map_large_erase_seq2()
{
	T v;
	for (int i = ft::Tester::large_number; i > 0; i--)
		v.insert(typename T::value_type(i, i));
	for (int i = 0; i < ft::Tester::large_number; i++)
		v.erase(i + 1);
	std::string s = map_attributes<T>(v);
	return (ft::Tester::Return(s));
}

template <typename T>
std::string map_large_erase_seq1()
{
	T v;
	for (int i = 0; i < ft::Tester::large_number; i++)
		v.insert(typename T::value_type(i, i));
	for (int i = ft::Tester::large_number; i > 0; i--)
		v.erase(i - 1);
	std::string s = map_attributes<T>(v);
	return (ft::Tester::Return(s));
}


template <typename T>
std::string map_large_insert_rnd3()
{
	T v;

	srand (20);
	for (int i = 0; i < ft::Tester::large_number; i++)
	{
		std::string rnd = randomString(10);
		v.insert(typename T::value_type(rnd, i));
	}
	std::string s = map_attributes<T>(v);
	return (ft::Tester::Return(s));
}

template <typename T>
std::string map_large_insert_rnd2()
{
	T v;

	srand (15);
	for (int i = 0; i < ft::Tester::large_number; i++)
	{
		float rnd = rand() % ft::Tester::large_number + 1;
		v.insert(typename T::value_type(rnd, i));
	}
	std::string s = map_attributes<T>(v);
	return (ft::Tester::Return(s));
}

template <typename T>
std::string map_large_insert_rnd1()
{
	T v;

	srand (1);
	for (int i = 0; i < ft::Tester::large_number; i++)
	{
		int rnd = rand() % ft::Tester::large_number + 1;
		v.insert(typename T::value_type(rnd, i));
	}
	std::string s = map_attributes<T>(v);
	return (ft::Tester::Return(s));
}

template <typename T>
std::string map_large_insert_seq2()
{
	T v;
	for (int i = ft::Tester::large_number; i > 0; i--)
		v.insert(typename T::value_type(i, i));
	std::string s = map_attributes<T>(v);
	return (ft::Tester::Return(s));
}

template <typename T>
std::string map_large_insert_seq1()
{
	T v;
	for (int i = 0; i < ft::Tester::large_number; i++)
		v.insert(typename T::value_type(i, i));
	std::string s = map_attributes<T>(v);
	return (ft::Tester::Return(s));
}

#endif
