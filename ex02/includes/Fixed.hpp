/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yodana <yodana@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 09:34:49 by yodana            #+#    #+#             */
/*   Updated: 2022/06/28 15:23:11 by yodana           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
# define FIXED_H

#include <iostream>

class Fixed{
    public:
        Fixed(void);
        Fixed(int const e);
        Fixed(float const f);
        ~Fixed(void);
        Fixed(Fixed const &src);
        Fixed & operator=(Fixed const & rhs);
        int getRawBits(void) const;
        void setRawBits(int const raw);
        float toFloat(void) const;
        int toInt(void) const;
        bool operator>(Fixed const & rhs) const;
        bool operator<(Fixed const & rhs) const;
        bool operator>=(Fixed const & rhs) const;
        bool operator<=(Fixed const & rhs) const;
        bool operator==(Fixed const & rhs) const;
        bool operator!=(Fixed const & rhs) const;
        Fixed operator+(Fixed const & rhs) const;
        Fixed operator-(Fixed const & rhs) const;
        Fixed operator*(Fixed const & rhs) const;
        Fixed operator/(Fixed const & rhs) const;
        Fixed & operator++(Fixed const & rhs);
        Fixed operator++(Fixed const & rhs) const;
        Fixed & operator--(Fixed const & rhs) ;
        Fixed operator--(Fixed const & rhs) const;

    private:
       int _valeur;
       static int const _bits = 8;
};

std::ostream & operator<<(std::ostream& o, Fixed const & i);

#endif