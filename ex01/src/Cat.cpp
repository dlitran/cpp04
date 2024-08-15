/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlitran <dlitran@student.42barcelona.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 17:32:08 by dlitran           #+#    #+#             */
/*   Updated: 2024/08/15 15:16:43 by dlitran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Cat.hpp"

Cat::Cat(): Animal()
{
	std::cout << "Cat default constructor called" << std::endl;
	this->_type = "Cat";
	this->_brain = new Brain;
	for (int j = 0; j <= 99; j++)
		this->_brain->setIdeas(j, "Cat idea");
}

Cat::Cat(Cat const &src): Animal(src)
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
		this->_type = rhs.getType(); //redundant?
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
