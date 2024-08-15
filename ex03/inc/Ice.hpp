/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlitran <dlitran@student.42barcelona.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 02:05:21 by dlitran           #+#    #+#             */
/*   Updated: 2024/08/15 02:05:21 by dlitran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

#include "AMateria.hpp"

class Ice
{
	protected:

	public:
		Ice();
		//[...]
		std::string const & getType() const; //Returns the materia type
		virtual Ice* clone() const = 0; //returns an instance of the same type.
		virtual void use(ICharacter& target);
};
#endif
