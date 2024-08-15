/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlitran <dlitran@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 14:56:59 by dlitran           #+#    #+#             */
/*   Updated: 2024/08/12 15:04:37 by dlitran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>
#include <string>

class Animal
{
	public:
		Animal();
		Animal(Animal const &src);
		Animal &operator=(Animal const &rhs);
		virtual ~Animal(); //hay que declararlo como virtual para que al estar alocado de manera dinamica, delete llame al destructor correcto (base *a = new derived;)
		std::string getType(void) const;
		virtual void makeSound() const;

	protected:
		std::string _type;

	private:

};

#endif
