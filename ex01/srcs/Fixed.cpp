/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yodana <yodana@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 09:27:29 by yodana            #+#    #+#             */
/*   Updated: 2022/06/23 15:25:16 by yodana           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "../includes/Fixed.hpp"
#include <cmath>

Fixed::Fixed(void):_valeur(0){
    std::cout << "Default constructor called" << std::endl;
    return ;
}

Fixed::Fixed(int const e){
    this->_valeur = e << (this->_bits);    
    return ;
}

Fixed::Fixed(float const f){
    this->_valeur = std::roundf(f * pow(2,this->_bits));
    return ;
}

Fixed::~Fixed(void){
    std::cout << "Destructor called" << std::endl;
    return ;
}

void Fixed::setRawBits(int const raw){
    this->_valeur = raw;
}

Fixed::Fixed(Fixed const &src){
    std::cout << "Copy constructor called" << std::endl;
    *this = src;
}

float Fixed::toFloat(void) const{
    float e = (float)(this->_valeur >> this->_bits);
    int mask = 255;
    int b = this->_valeur & mask;
    float r = 0.5;
    float f = 0;
    mask = 128;
    for(int i = 0; i < this->_bits; i++){
        if ((b & mask) == mask){
            f = f + r;
        }
        r = r / 2;
        mask = mask / 2;
    }
    return e;
}

int Fixed::toInt(void) const{
    return (int)(this->_valeur >> this->_bits);
}

int Fixed::getRawBits(void) const{
    std::cout << "getRawBits member function called" << std::endl;
    return this->_valeur;
}

Fixed& Fixed::operator=(Fixed const & rhs){
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &rhs)
        this->_valeur = rhs.getRawBits();
    return *this;
}

std::ostream & operator<<(std::ostream& o, Fixed const & i){
    o << i.toFloat();
    return o;
}