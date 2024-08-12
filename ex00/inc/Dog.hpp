/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlitran <dlitran@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 15:02:49 by dlitran           #+#    #+#             */
/*   Updated: 2024/08/12 18:18:10 by dlitran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"

class Dog: virtual public Animal
{
	public:
		Dog();
		//Dog(std::string type);
		Dog(Dog const &src);
		Dog &operator=(Dog const &rhs);
		~Dog();
		void makeSound() const;

	protected:

	private:

};

#endif