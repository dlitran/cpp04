/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlitran <dlitran@student.42barcelona.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 15:02:49 by dlitran           #+#    #+#             */
/*   Updated: 2024/08/15 15:29:12 by dlitran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "AAnimal.hpp"
# include "Brain.hpp"

class Dog: virtual public Animal
{
	public:
		Dog();
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
