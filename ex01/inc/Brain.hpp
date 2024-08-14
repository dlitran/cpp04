/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlitran <dlitran@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 18:30:30 by dlitran           #+#    #+#             */
/*   Updated: 2024/08/14 19:44:24 by dlitran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <string>
#include <iostream>

class Brain
{
	public:
		Brain();
		Brain(Brain const &src);
		Brain &operator=(Brain const &rhs);
		std::string getIdeas(int i) const;
		~Brain();
		
	protected:
		std::string _ideas[100];
};

#endif