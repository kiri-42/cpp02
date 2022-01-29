/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkirihar <tkirihar@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 16:57:10 by tkirihar          #+#    #+#             */
/*   Updated: 2022/01/29 17:07:43 by tkirihar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	this->raw = 0;
}

Fixed::Fixed(int const src)
{
	std::cout << "Int constructor called" << std::endl;
	this->raw = src * (1 << this->bit);
}

Fixed::Fixed(float const src)
{
	std::cout << "Float constructor called" << std::endl;
	this->raw = static_cast<int>(std::roundf(src * (1 << this->bit)));
}

Fixed::Fixed(Fixed const &src)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed &Fixed::operator=(Fixed const &src)
{
	std::cout << "Assignation operator called" << std::endl;
	this->raw = src.getRawBits();
	return *this;
}

int Fixed::getRawBits() const
{
	std::cout << "getRawBits member function called" << std::endl;
	return this->raw;
}

void Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	this->raw = raw;
}

float Fixed::toFloat(void) const
{
	return static_cast<float>(this->raw) / (1 << this->bit);
}