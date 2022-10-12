#ifndef POINT_H
# define POINT_H

#include "Fixed.hpp"
#include <iostream>

class Point{
    public:
        Point(void);
        ~Point(void);
        Point(Point const &src);
        Point & operator=(Point const & rhs);

private:
    const Fixed _x;
    const Fixed _y;

};

#endif