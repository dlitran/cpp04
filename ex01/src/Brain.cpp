/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlitran <dlitran@student.42barcelona.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 17:38:56 by dlitran           #+#    #+#             */
/*   Updated: 2024/08/15 15:18:30 by dlitran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Brain.hpp"

Brain::Brain()
{
	for(int i = 0; i <= 99; i++)
		this->_ideas[i] = "Not thinking";
	std::cout << "Brain default constructor called" << std::endl;
}

Brain::Brain(Brain const &src)
{
	*this = src;
	std::cout << "Brain copy constructor called" << std::endl;
}

Brain &Brain::operator=(Brain const &rhs)
{
	if (this != &rhs)
	{
		for (int i = 0; i < 100; i++)
			this->_ideas[i] = rhs.getIdeas(i);
	}
	std::cout << "Brain copy assigment operator called" << std::endl;
	return (*this);
}

std::string Brain::getIdeas(int i) const
{
	return (this->_ideas[i]);
}

void Brain::setIdeas(int i, std::string const &idea)
{
	this->_ideas[i] = idea;
}

Brain::~Brain()
{
	std::cout << "Brain destructor called" << std::endl;
}
