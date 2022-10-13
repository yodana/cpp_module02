#ifndef POINT_H
# define POINT_H

#include "Fixed.hpp"
#include <iostream>

class Point{
    public:
        Point(void);
        Point(const float x, const float y);
        ~Point(void);
        Point(Point const &src);
        Point & operator=(Point const & rhs);
        Fixed getX(void) const;
        Fixed getY(void) const;
        static Fixed manathan(Point a, Point b){
            Fixed c = a._y - a._x;
            if (c < 0)
                c = c * -1;
            Fixed d = b._y - b._x;
            if (d < 0)
                d = d * -1;
            return (c + d);
        }

    private:
        const Fixed _x;
        const Fixed _y;
};

std::ostream & operator<<(std::ostream& o, Point const & point);
bool bsp( Point const a, Point const b, Point const c, Point const point);
bool test(Point const t);
#endif