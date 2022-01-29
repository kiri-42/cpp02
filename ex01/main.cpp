/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkirihar <tkirihar@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 16:56:29 by tkirihar          #+#    #+#             */
/*   Updated: 2022/01/29 01:03:21 by tkirihar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"

int	main()
{
	Fixed a;
	Fixed const b( 10 );
	Fixed const c( 42.42f );
	Fixed const d( b );

	std::cout << "a is" << a << std::endl;
	std::cout << "b is" << b << std::endl;
	std::cout << "c is" << c << std::endl;
	std::cout << "d is" << d << std::endl;

	std::cout << "a is" << a.toInt() << "as integer" << std::endl;
	std::cout << "b is" << b.toInt() << "as integer" << std::endl;
	std::cout << "c is" << c.toInt() << "as integer" << std::endl;
	std::cout << "d is" << d.toInt() << "as integer" << std::endl;

	return 0;
}