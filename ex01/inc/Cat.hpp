/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlitran <dlitran@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 15:04:06 by dlitran           #+#    #+#             */
/*   Updated: 2024/08/14 19:45:53 by dlitran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Cat: virtual public Animal
{
	public:
		Cat();
		//Cat(std::string type);
		Cat(Cat const &src);
		Cat &operator=(Cat const &rhs);
		Brain *getBrain() const;
		~Cat();
		void makeSound() const;

	protected:

	private:
		Brain *_brain;

};

#endif