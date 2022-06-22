/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yodana <yodana@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 09:27:29 by yodana            #+#    #+#             */
/*   Updated: 2022/06/22 14:20:14 by yodana           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "../includes/Fixed.hpp"

Fixed::Fixed(void):_valeur(0){
    std::cout << "Default constructor called" << std::endl;
    return ;
}

Fixed::Fixed(int const e){
    // mettre e sous la forme de 8 bits => 00001000
    // changer la partie fractionnaire pour le nombre a virgule 
    this->_valeur = e;
    std::cout << "Default constructor called" << std::endl;
    return ;
}

Fixed::Fixed(float const f):_valeur(0){
    (void)f;
    std::cout << "Default constructor called" << std::endl;
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
    o << i.getRawBits();
    return o;
}