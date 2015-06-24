// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   iter.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: mcanal <zboub@42.fr>                       +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/06/24 18:11:29 by mcanal            #+#    #+#             //
//   Updated: 2015/06/24 19:09:22 by mcanal           ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include <iostream>

template <typename T, typename F>
static void iter(T &tab, unsigned int const len, F f)
{
	for (unsigned int i = 0; i < len; i++)
		f(tab[i]);
}

template<typename T>
static void echo(T t) //testing purpose only
{
	std::cout << t << std::endl;
}

template<typename T>
static void echo2(T t) //testing purpose only
{
	std::cout << t << t << std::endl;
}

int		main(void)
{
	std::string		s_tab[] = { "toto", "tata", "tutu" };
	int				i_tab[] = { 1, 2, 3, 4, 5 };

	::iter(s_tab, sizeof(s_tab)/sizeof(*s_tab), echo<std::string>);
	::iter(s_tab, sizeof(s_tab)/sizeof(*s_tab), echo2<std::string>);
	::iter(i_tab, sizeof(i_tab)/sizeof(*i_tab), echo<int>);
	::iter(i_tab, sizeof(i_tab)/sizeof(*i_tab), echo2<int>);

	return (0);
}
