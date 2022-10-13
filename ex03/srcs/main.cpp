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
Point a(1, 1);
const Point b(2, 2);
const Point c(3, 1);
const Point point(1.75, 1.5);

if (bsp(a, b, c, point))
    std::cout << "Point dans le triangle" << std::endl;
else
    std::cout << "Point pas dans le triangle" << std::endl;

const Point other_point(10, 1.5);

if (bsp(a, b, c, other_point))
    std::cout << "Point dans le triangle" << std::endl;
else
    std::cout << "Point pas dans le triangle" << std::endl;
return 0;
}