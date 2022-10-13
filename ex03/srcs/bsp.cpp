#include <iostream>
#include "../includes/Point.hpp"

#include <cmath>


bool bsp( Point const a, Point const b, Point const c, Point const point){
    Point points[3] = {a, b , c}; 
    for(int i = 0; i < 3; i++){
        Fixed coeff = Point::coeff(points[i], points[(i + 1) % 3]);
        Fixed m = points[i].getY() - (coeff * points[i].getX());
        if (points[(i + 2) % 3].getY() - (coeff * points[(i + 2) % 3].getX() + m) <= 0){
            if(point.getY() - (coeff * point.getX() + m) >= 0)
                return 0;
        }
       if (points[(i + 2) % 3].getY() - (coeff * points[(i + 2) % 3].getX() + m ) >= 0){
            if(point.getY() - (coeff * point.getX() + m) <= 0)
                return 0;
        }
    }
    return 1;
}
