/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlitran <dlitran@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 17:23:05 by dlitran           #+#    #+#             */
/*   Updated: 2024/08/12 18:35:43 by dlitran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Dog.hpp"

Dog::Dog(): Animal()
{
	this->_type = "Dog";
	new Brain();
	std::cout << "Dog default constructor called" << std::endl;
}
/*
Dog::Dog(std::string type): Animal(type)
{
	std::cout << "Dog parameter constructor called" << std::endl;
}
*/
Dog::Dog(Dog const &src): Animal()
{
	std::cout << "Dog copy constructor called" << std::endl;
	*this = src;
}

Dog &Dog::operator=(Dog const &rhs)
{
	std::cout << "Dog copy assigment operator called" << std::endl;
	if (this != &rhs)
		this->_type = rhs.getType();
	return(*this);
}

Dog::~Dog()
{
	std::cout << "Dog destructor called" << std::endl;
}

void Dog::makeSound() const
{
	std::cout << "woof woof" << std::endl;
}