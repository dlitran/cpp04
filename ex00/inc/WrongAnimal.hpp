/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlitran <dlitran@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 18:01:49 by dlitran           #+#    #+#             */
/*   Updated: 2024/08/12 18:19:50 by dlitran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include <iostream>
#include <string>

class WrongAnimal
{
	public:
		WrongAnimal();
		//WrongAnimal(std::string type);
		WrongAnimal(WrongAnimal const &src);
		WrongAnimal &operator=(WrongAnimal const &rhs);
		~WrongAnimal(); //hay que declararlo como virtual para que al estar alocado de manera dinamica, delete llame al destructor correcto (base *a = new derived;) (no compila)
		std::string getType(void) const;
		void makeSound() const;

	protected:
		std::string _type;

	private:

};

#endif