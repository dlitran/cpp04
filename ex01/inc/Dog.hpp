/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlitran <dlitran@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 15:02:49 by dlitran           #+#    #+#             */
/*   Updated: 2024/08/14 19:51:23 by dlitran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Dog: virtual public Animal
{
	public:
		Dog();
		//Dog(std::string type);
		Dog(Dog const &src);
		Dog &operator=(Dog const &rhs);
		Brain *getBrain() const;
		~Dog();
		void makeSound() const;

	protected:

	private:
		Brain *_brain;

};

#endif