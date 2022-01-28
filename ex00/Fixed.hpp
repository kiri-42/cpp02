/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkirihar <tkirihar@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 16:57:19 by tkirihar          #+#    #+#             */
/*   Updated: 2022/01/28 23:17:00 by tkirihar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
	private:
		int fixed_point;
		static const int bit = 8;

	public:
		Fixed();
		Fixed(Fixed const &src);
		~Fixed();
		Fixed &operator=(Fixed const &src);

		int getRawBits(void) const;
		void setRawBits(int const raw);
};

#endif