/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yodana <yodana@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 09:27:32 by yodana            #+#    #+#             */
/*   Updated: 2022/06/23 14:17:32 by yodana           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "../includes/Fixed.hpp"

int main( void ) {
//Fixed a;
Fixed const b( 2.15f );
//Fixed const c( 42.42f );
//Fixed const d( b );
//a = Fixed( 1234.4321f );
//std::cout << "a is " << a << std::endl;
std::cout << "b is " << b << std::endl;
/*std::cout << "c is " << c << std::endl;
std::cout << "d is " << d << std::endl;*/
/*std::cout << "a is " << a.toInt() << " as integer" << std::endl;
std::cout << "b is " << b.toInt() << " as integer" << std::endl;
std::cout << "c is " << c.toInt() << " as integer" << std::endl;
std::cout << "d is " << d.toInt() << " as integer" << std::endl;*/
return 0;
}