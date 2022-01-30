/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_iterators.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iwillens <iwillens@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/02 12:40:02 by iwillens          #+#    #+#             */
/*   Updated: 2022/01/02 12:40:03 by iwillens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SET_ITERATORS_HPP
# define SET_ITERATORS_HPP

# include "set_tests.hpp"

template <typename T>
std::string set_iterator_rend2()
{
	T rng;
	for (int i = 0; i < 10; i++)
		rng.insert(typename T::value_type(i));
	T v(rng.begin(), rng.end());
	std::string s = set_attributes<T>(v);
	typename T::reverse_iterator it = v.rend();
	it--;
	it--;
	it++;
	s += "\n";
	return (ft::Tester::Return(s));
}

template <typename T>
std::string set_iterator_rend1()
{
	T rng;
	for (int i = 0; i < 10; i++)
		rng.insert(typename T::value_type(i));
	T v(rng.begin(), rng.end());
	std::string s = set_attributes<T>(v);
	s += "\n";
	s += "REnd - 1: " + ft::to_string(*(--(v.rend()))) + "\n";
	s += "REnd - 3: " + ft::to_string(*(--(--(v.rend())))) + "\n";
	s += "REnd - 9: " + ft::to_string(*(--(--(--(v.rend()))))) + "\n";
	return (ft::Tester::Return(s));
}

template <typename T>
std::string set_iterator_rbegin2()
{
	T rng;
	for (int i = 0; i < 10; i++)
		rng.insert(typename T::value_type(i));
	T v(rng.begin(), rng.end());
	std::string s = set_attributes<T>(v);
	typename T::reverse_iterator it = v.rbegin();
	it++;
	it++;
	it--;
	s += "\n";
	s += "Value: " + ft::to_string(*it) + "\n";
	return (ft::Tester::Return(s));
}

template <typename T>
std::string set_iterator_rbegin1()
{
	T rng;
	for (int i = 0; i < 10; i++)
		rng.insert(typename T::value_type(i));
	T v(rng.begin(), rng.end());
	std::string s = set_attributes<T>(v);
	s += "\n";
	s += "RBegin: " + ft::to_string(*(v.rbegin())) + "\n";
	s += "RBegin + 3: " + ft::to_string(*(v.rbegin()++)) + "\n";
	s += "RBegin + 9: " + ft::to_string(*((v.rbegin()++)++)) + "\n";
	return (ft::Tester::Return(s));
}

template <typename T>
std::string set_iterator_end2()
{
	T rng;
	for (int i = 0; i < 10; i++)
		rng.insert(typename T::value_type(i));
	T v(rng.begin(), rng.end());
	std::string s = set_attributes<T>(v);
	typename T::iterator it = v.end();
	it--;
	it--;
	it++;
	s += "\n";
	s += "Value: " + ft::to_string(*it) + "\n";
	return (ft::Tester::Return(s));
}

template <typename T>
std::string set_iterator_end1()
{
	T rng;
	for (int i = 0; i < 10; i++)
		rng.insert(typename T::value_type(i));
	T v(rng.begin(), rng.end());
	std::string s = set_attributes<T>(v);
	s += "\n";
	s += "End - 1: " + ft::to_string(*((--v.end()))) + "\n";
	s += "End - 3: " + ft::to_string(*(--(--(v.end())))) + "\n";
	s += "End - 9: " + ft::to_string(*(--(--(--(v.end()))))) + "\n";
	return (ft::Tester::Return(s));
}

template <typename T>
std::string set_iterator_begin2()
{
	T rng;
	for (int i = 0; i < 10; i++)
		rng.insert(typename T::value_type(i));
	T v(rng.begin(), rng.end());
	std::string s = set_attributes<T>(v);
	typename T::iterator it = v.begin();
	it++;
	it++;
	it--;
	s += "\n";
	s += "Value: " + ft::to_string(*it) + "\n";
	return (ft::Tester::Return(s));
}

template <typename T>
std::string set_iterator_begin1()
{
	T rng;
	for (int i = 0; i < 10; i++)
		rng.insert(typename T::value_type(i));
	T v(rng.begin(), rng.end());
	std::string s = set_attributes<T>(v);
	s += "\n";
	s += "Begin: " + ft::to_string(*(v.begin())) + "\n";
	s += "Begin + 3: " + ft::to_string(*(v.begin()++)) + "\n";
	s += "Begin + 9: " + ft::to_string(*((v.begin()++)++)) + "\n";
	return (ft::Tester::Return(s));
}

#endif
