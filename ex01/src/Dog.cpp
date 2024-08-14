/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlitran <dlitran@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 17:23:05 by dlitran           #+#    #+#             */
/*   Updated: 2024/08/14 19:51:35 by dlitran          ###   ########.fr       */
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
	{
		*this->_brain = *rhs.getBrain();
		this->_type = rhs.getType();
	}
	return(*this);
}

Brain *Dog::getBrain() const;
{
	return (this->_brain);
}

Dog::~Dog()
{
	delete this->_brain;
	std::cout << "Dog destructor called" << std::endl;
}

void Dog::makeSound() const
{
	std::cout << "woof woof" << std::endl;
}