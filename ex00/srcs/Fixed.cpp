#include <iostream>
#include "../includes/Fixed.hpp"

Fixed::Fixed(void):_valeur(0){
    std::cout << "Default constructor called" << std::endl;
    return ;
}

Fixed::~Fixed(void){
    std::cout << "Destructor called" << std::endl;
    return ;
}

Fixed::Fixed & operator=(Fixed const & rhs){
    
    return *this;
}