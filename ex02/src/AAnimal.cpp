/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlitran <dlitran@student.42barcelona.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 15:05:35 by dlitran           #+#    #+#             */
/*   Updated: 2024/08/15 15:31:50 by dlitran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/AAnimal.hpp"

Animal::Animal(): _type("default")
{
	std::cout << "Animal default constructor called" << std::endl;
}
/*
Animal::Animal(std::string type): _type(type)
{
	std::cout << "Animal parameter constructor called" << std::endl;
}
*/
Animal::Animal(Animal const &src)
{
	std::cout << "Animal copy constructor called" << std::endl;
	*this = src;
}

Animal &Animal::operator=(Animal const &rhs)
{
	std::cout << "Animal copy assigment operator called" << std::endl;
	if (this != &rhs)
	{
		this->_type = rhs.getType();
	}
	return(*this);
}

std::string Animal::getType(void) const
{
	return(this->_type);
}

Animal::~Animal()
{
	std::cout << "Animal destructor called" << std::endl;
}
