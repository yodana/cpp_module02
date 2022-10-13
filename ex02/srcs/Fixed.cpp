/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yodana <yodana@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 09:27:29 by yodana            #+#    #+#             */
/*   Updated: 2022/10/12 12:55:46 by yodana           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "../includes/Fixed.hpp"
#include <cmath>

int my_pow(int power){
    int r = 1;
    while(power != 0){
        r = r * 2;
        power--;
    }
    return r;
}

Fixed::Fixed(void):_valeur(0){
    std::cout << "Default constructor called" << std::endl;
    return ;
}

Fixed::Fixed(int const e){
    setRawBits(e << (this->_bits));
    std::cout << "Int constructor called" << std::endl;    
    return ;
}

Fixed::Fixed(float const f){
    setRawBits(std::roundf(f * my_pow(this->_bits)));
    std::cout << "Float constructor called" << std::endl;
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
    return f + e;
}

int Fixed::toInt(void) const{
    return (int)(this->_valeur >> this->_bits);
}

int Fixed::getRawBits(void) const{
    return this->_valeur;
}

Fixed& Fixed::operator=(Fixed const & rhs){
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &rhs)
        this->_valeur = rhs.getRawBits();
    return *this;
}

bool Fixed::operator>(Fixed const & rhs) const{
    if(this->toFloat() > rhs.toFloat())
        return 1;
    return 0;
}

bool Fixed::operator<(Fixed const & rhs) const{
    if(this->toFloat() < rhs.toFloat())
        return 1;
    return 0;
}

bool Fixed::operator>=(Fixed const & rhs) const{
    if(rhs.toFloat() >= this->toFloat())
        return 0;
    return 1;
}

bool Fixed::operator<=(Fixed const & rhs) const{
    if(rhs.toFloat() <= this->toFloat())
        return 0;
    return 1;
}

bool Fixed::operator==(Fixed const & rhs) const{
    if(this->toFloat() == rhs.toFloat())
        return 1;
    return 0;
}

bool Fixed::operator!=(Fixed const & rhs) const{
    if(this->toFloat() != rhs.toFloat())
        return 1;
    return 0;
}

Fixed Fixed::operator+(Fixed const & rhs) const{
    return Fixed(this->toFloat() + rhs.toFloat());
}

Fixed Fixed::operator-(Fixed const & rhs) const{
    return Fixed(this->toFloat() - rhs.toFloat());
}

Fixed Fixed::operator*(Fixed const & rhs) const{
    return Fixed(this->toFloat() * rhs.toFloat());
}

Fixed Fixed::operator/(Fixed const & rhs) const{
    if (rhs.toFloat() == 0)
        return Fixed(0);
    return Fixed(this->toFloat() / rhs.toFloat());
}

Fixed Fixed::operator++(){
    this->_valeur = this->_valeur + 1; 
    return *this;
}

Fixed Fixed::operator++(int n){
    n = 1;
    Fixed tmp = Fixed(this->toFloat());
    this->_valeur = this->_valeur + n;
    return tmp;
}

Fixed Fixed::operator--(){
    this->_valeur = this->_valeur - 1; 
    return *this;
}

Fixed Fixed::operator--(int n){
    n = 1;
    Fixed tmp = Fixed(this->toFloat());
    this->_valeur = this->_valeur - n;
    return tmp;
}

std::ostream & operator<<(std::ostream& o, Fixed const & i){
    o << i.toFloat();
    return o;
}