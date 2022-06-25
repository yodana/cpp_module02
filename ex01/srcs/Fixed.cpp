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
    // mettre e sous la forme de 8 bits => 00001000
    // changer la partie fractionnaire pour le nombre a virgule
    this->_valeur = e << (this->_bits);    
    std::cout << "Constructor int called " << this->_valeur << std::endl;
    return ;
}

Fixed::Fixed(float const f){
    this->_valeur = (int)std::roundf(f) << (this->_bits);
    float e = 0;
    float r = 1;
    int i = 0;
    int b = 0;

    while(i <= 7){
        if ((e + r) <= (f - (int)std::roundf(f))){
            b = b |	1;
            e = e + r;
        }
        b = b << 1;
        r = r / 2;
        std::cout << "valeur de b " << b << std::endl;
        std::cout << "valeur de e " << e << std::endl;
        std::cout << "valeur de r " << r << std::endl;
        i++;
    }
    // pour la partie fractionnaire si f > 2^-n alors diviser f par 2 et mettre 1 pour le binaire  et passer au 2^n suivant
    // sinon juste passer au 2^-n suivant

    std::cout << "valeur de f " << f << std::endl;
    std::cout << "valeur de b " << b << std::endl;
    this->_valeur = this->_valeur | b;
    std::cout << "Constructor float called " << this->_valeur << std::endl;
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
    return (float)(this->_valeur >> this->_bits);
}

int Fixed::toInt(void) const{
    return (int)this->_valeur;
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