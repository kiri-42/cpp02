/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkirihar <tkirihar@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 16:57:19 by tkirihar          #+#    #+#             */
/*   Updated: 2022/05/26 05:26:50 by tkirihar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
	private:
		int raw;
		static const int bit = 8;

	public:
		Fixed();
		Fixed(int const src);
		Fixed(float const src);
		Fixed(Fixed const &src);
		~Fixed();

		int getRawBits(void) const;
		void setRawBits(int const raw);
		float toFloat(void) const;
		int toInt(void) const;

		Fixed &operator=(Fixed const &src);

		bool operator==(Fixed const &src) const;
		bool operator!=(Fixed const &src) const;
		bool operator>(Fixed const &src) const;
		bool operator>=(Fixed const &src) const;
		bool operator<(Fixed const &src) const;
		bool operator<=(Fixed const &src) const;

		Fixed operator+(Fixed const &src) const;
		Fixed operator-(Fixed const &src) const;
		Fixed operator*(Fixed const &src) const;
		Fixed operator/(Fixed const &src) const;

		Fixed& operator++();
		Fixed operator++(int);
		Fixed& operator--();
		Fixed operator--(int);
};

std::ostream &operator<<(std::ostream &ost, Fixed const &src);

#endif
