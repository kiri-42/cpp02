/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkirihar <tkirihar@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 16:57:10 by tkirihar          #+#    #+#             */
/*   Updated: 2022/05/26 06:15:03 by tkirihar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"

Fixed::Fixed()
{
	// std::cout << "Default constructor called" << std::endl;
	this->raw = 0;
}

Fixed::Fixed(int const src)
{
	// std::cout << "Int constructor called" << std::endl;
	this->raw = src * (1 << this->bit);
}

Fixed::Fixed(float const src)
{
	// std::cout << "Float constructor called" << std::endl;
	this->raw = static_cast<int>(std::roundf(src * (1 << this->bit)));
}

Fixed::Fixed(Fixed const &src)
{
	// std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

Fixed::~Fixed()
{
	// std::cout << "Destructor called" << std::endl;
}


int Fixed::getRawBits() const
{
	// std::cout << "getRawBits member function called" << std::endl;
	return this->raw;
}

void Fixed::setRawBits(int const raw)
{
	// std::cout << "setRawBits member function called" << std::endl;
	this->raw = raw;
}

float Fixed::toFloat(void) const
{
	return static_cast<float>(this->raw) / (1 << this->bit);
}

int Fixed::toInt(void) const
{
	return this->raw / (1 << this->bit);
}

Fixed &Fixed::operator=(Fixed const &src)
{
	// std::cout << "Assignation operator called" << std::endl;
	this->raw = src.getRawBits();
	return *this;
}

bool Fixed::operator==(Fixed const &src) const {
	if (this->raw == src.raw) {
		return true;
	}
	return false;
}

bool Fixed::operator!=(Fixed const &src) const {
	if (this->raw == src.raw) {
		return true;
	}
	return false;
}

bool Fixed::operator>(Fixed const &src) const {
	if (this->raw > src.raw) {
		return true;
	}
	return false;
}

bool Fixed::operator>=(Fixed const &src) const {
	if (this->raw >= src.raw) {
		return true;
	}
	return false;
}

bool Fixed::operator<(Fixed const &src) const {
	if (this->raw < src.raw) {
		return true;
	}
	return false;
}

bool Fixed::operator<=(Fixed const &src) const {
	if (this->raw <= src.raw) {
		return true;
	}
	return false;
}

Fixed Fixed::operator+(Fixed const &src) const {
	Fixed ret;
	ret.setRawBits(this->raw + src.raw);
	return ret;
}

Fixed Fixed::operator-(Fixed const &src) const {
	Fixed ret;
	ret.setRawBits(this->raw - src.raw);
	return ret;
}

Fixed Fixed::operator*(Fixed const &src) const {
	Fixed ret(this->toFloat() * src.toFloat());
	return ret;
}

Fixed Fixed::operator/(Fixed const &src) const {
	Fixed ret(this->toFloat() / src.toFloat());
	return ret;
}

Fixed& Fixed::operator++() {
	++this->raw;
	return *this;
}

Fixed Fixed::operator++(int) {
	Fixed ret(*this);
	this->raw++;
	return ret;
}

Fixed& Fixed::operator--() {
	--this->raw;
	return *this;
}

Fixed Fixed::operator--(int) {
	Fixed ret(*this);
	this->raw--;
	return ret;
}

Fixed& Fixed::min(Fixed &f1, Fixed &f2)
{
	if (f1.raw <= f2.raw) {
		return f1;
	} else {
		return f2;
	}
}

const Fixed& Fixed::min(const Fixed &f1, const Fixed &f2)
{
	if (f1.raw <= f2.raw) {
		return f1;
	} else {
		return f2;
	}
}

Fixed& Fixed::max(Fixed &f1, Fixed &f2)
{
	if (f1.raw >= f2.raw) {
		return f1;
	} else {
		return f2;
	}
}

const Fixed& Fixed::max(const Fixed &f1, const Fixed &f2)
{
	if (f1.raw >= f2.raw) {
		return f1;
	} else {
		return f2;
	}
}

std::ostream &operator<<(std::ostream &ost, Fixed const &src)
{
	ost << src.toFloat();
	return ost;
}
