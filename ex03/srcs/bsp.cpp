#include <iostream>
#include "../includes/Point.hpp"

#include <cmath>


bool bsp( Point const a, Point const b, Point const c, Point const point){
    (void)point;
    (void)c;
    std::cout << "distance is " << Point::manathan( a, b) << std::endl;
    return 0;
}

bool test(Point const t){
    (void)t;
    return 0;
}
