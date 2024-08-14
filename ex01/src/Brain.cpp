/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlitran <dlitran@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 17:38:56 by dlitran           #+#    #+#             */
/*   Updated: 2024/08/14 19:44:58 by dlitran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Brain.hpp"

Brain::Brain()
{
}

Brain::Brain(Brain const &src)
{
	*this = src;
}

Brain &Brain::operator=(Brain const &rhs)
{
	if (this != &rhs)
	{
		for (int i = 0; i < 100; i++)
			this->_ideas[i] = rhs.getIdeas(i);
	}
	return (*this);
}

std::string Brain::getIdeas(int i) const
{
	return (this->_ideas[i]);
}

Brain::~Brain()
{

}
