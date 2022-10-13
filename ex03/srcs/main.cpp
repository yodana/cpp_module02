/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yodana <yodana@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 09:27:32 by yodana            #+#    #+#             */
/*   Updated: 2022/10/12 19:57:18 by yodana           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "../includes/Point.hpp"

bool bsp( Point const a, Point const b, Point const c, Point const point);

int main( void ) {
/*bool test = a>b;
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
Fixed e;
tes =  e++;
std::cout << "post + " << tes << std::endl;
std::cout << "post + " << e << std::endl;
tes =  ++e;
std::cout << "pre + " << tes << std::endl;
std::cout << "pre + " << e << std::endl;
tes =  e--;
std::cout << "post - " << tes << std::endl;
std::cout << "post - " << e << std::endl;
tes =  --e;
std::cout << "pre - " << tes << std::endl;
std::cout << "pre - " << e << std::endl;*/

/**Fixed a;
Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
std::cout << a << std::endl;
std::cout << ++a << std::endl;
std::cout << a << std::endl;
std::cout << a++ << std::endl;
std::cout << a << std::endl;
std::cout << b << std::endl;
std::cout << Fixed::min( a, b ) << std::endl;
;**/
Point a(10, 1);
const Point b(5, 2);
const Point c(4, 3);
const Point point(2, 2);

bsp(a, b, c, point);
return 0;
}