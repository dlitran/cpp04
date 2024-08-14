/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlitran <dlitran@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 17:32:08 by dlitran           #+#    #+#             */
/*   Updated: 2024/08/14 19:45:37 by dlitran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Cat.hpp"

Cat::Cat(): Animal()
{
	this->_type = "Cat";
	std::cout << "Cat default constructor called" << std::endl;
	this->_brain = new Brain;
}
/*
Cat::Cat(std::string type): Animal(type)
{
	std::cout << "Cat parameter constructor called" << std::endl;
}
*/
Cat::Cat(Cat const &src): Animal()
{
	std::cout << "Cat copy constructor called" << std::endl;
	*this = src;
}

Cat &Cat::operator=(Cat const &rhs)
{
	std::cout << "Cat copy assigment operator called" << std::endl;
	if (this != &rhs)
	{
		*this->_brain = *rhs.getBrain();
		this->_type = rhs.getType();
	}
	return(*this);
}

Brain *Cat::getBrain() const
{
	return (this->_brain);
}

Cat::~Cat()
{
	delete this->_brain;
	std::cout << "Cat destructor called" << std::endl;
}

void Cat::makeSound() const
{
	std::cout << "meow meow" << std::endl;
}