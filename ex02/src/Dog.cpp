/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlitran <dlitran@student.42barcelona.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 17:23:05 by dlitran           #+#    #+#             */
/*   Updated: 2024/08/15 15:16:32 by dlitran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Dog.hpp"

Dog::Dog(): Animal()
{
	std::cout << "Dog default constructor called" << std::endl;
	this->_type = "Dog";
	this->_brain = new Brain();
	for (int j = 0; j <= 99; j++)
		this->_brain->setIdeas(j, "Dog idea");
}

Dog::Dog(Dog const &src): Animal(src)
{
	std::cout << "Dog copy constructor called" << std::endl;
	this->_brain = new Brain;
	*this = src;
}

Dog &Dog::operator=(Dog const &rhs)
{
	std::cout << "Dog copy assigment operator called" << std::endl;
	if (this != &rhs)
	{
		*(this->_brain) = *(rhs.getBrain());
		this->_type = rhs.getType();
	}
	return(*this);
}

Brain *Dog::getBrain() const
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
