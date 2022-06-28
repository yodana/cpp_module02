/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yodana <yodana@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 09:27:32 by yodana            #+#    #+#             */
/*   Updated: 2022/06/28 15:20:45 by yodana           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "../includes/Fixed.hpp"

int main( void ) {
Fixed a;
Fixed const b( 10 );
Fixed const c( 42.42f );
Fixed const d(10 );
a = Fixed( 1234.4321f );
bool test = a>b;
std::cout << "> is " << test << std::endl;
test =  a<b;
std::cout << "< is " << test << std::endl;
test =  b==d;
std::cout << "== is " << test << std::endl;
test =  d!=b;
std::cout << "!= is " <<test << std::endl;
test =  a>=b;
std::cout << ">= is " << test  << std::endl;
test =  a<=b;
std::cout << "<= is " << test << std::endl;
Fixed tes = a+b;
std::cout << "+ is " << tes << std::endl;
tes =  a-b;
std::cout << "- is " << tes << std::endl;
tes =  a/b;
std::cout << "/ is " << tes << std::endl;
tes =  a*b;
std::cout << "* is " <<tes << std::endl;
return 0;
}