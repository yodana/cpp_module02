#include <iostream>
#include "../includes/Point.hpp"
#include <cmath>

Point::Point(void):_x(0), _y(0){
    return ;
}

Point::Point(const float x, const float y):_x(x), _y(y){
    return ;
}

Point::~Point(void){
    return ;
}

Point::Point(Point const &src){
    *this = src;
}

Point& Point::operator=(Point const & rhs){
    if (this != &rhs){
        const_cast<Fixed&>(this->_x) = rhs._x;
        const_cast<Fixed&>(this->_y) = rhs._y;
    }
    return *this;
}

Fixed Point::getX() const{
    return this->_x;
}

Fixed Point::getY() const{
    return this->_y;
}

std::ostream & operator<<(std::ostream& o, Point const & point){
    o << "x =>" << point.getX() << " y =>" << point.getY();
    return o;
}