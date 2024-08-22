/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlitran <dlitran@student.42barcelona.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 13:51:21 by dlitran           #+#    #+#             */
/*   Updated: 2024/08/15 13:51:21 by dlitran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"

int main(void)
{
	std::cout << "\033[31m" << "Just Leaks test:" << "\033[0m" <<std::endl;
	std::cout << "\033[34m" << "Constructors:" << "\033[0m" <<std::endl;
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << "\033[34m" << "Destructors:" << "\033[0m" <<std::endl;
	delete j;//should not create a leak
	delete i;

	std::cout << "\033[31m" << "Array of animals:" << "\033[0m" <<std::endl;
	std::cout << "\033[34m" << "Constructors and makeSound():" << "\033[0m" <<std::endl;
	int	const array_size = 4;
	Animal *a[array_size];
	for (int i = 0; i < array_size; i++)
	{
		if (i % 2 == 0)
			a[i] = new Cat();
		else
			a[i] = new Dog();
		a[i]->makeSound();
	}
	std::cout << "\033[34m" << "Destructors:" << "\033[0m" <<std::endl;
	for (int i = 0; i < array_size; i++)
	{
		delete a[i];
	}
	std::cout << "\033[31m" << "Deep copy test:" << "\033[0m" <<std::endl;
	std::cout << "\033[34m" << "b Constructor:" << "\033[0m" <<std::endl;
	Dog b;
	std::cout << "\033[34m" << "b Initial Idea:" << "\033[0m" <<std::endl;
	std::cout << b.getBrain()->getIdeas(0) << std::endl;
	b.getBrain()->setIdeas(0, "Happy idea");
	std::cout << "\033[34m" << "b Modified Idea:" << "\033[0m" <<std::endl;
	std::cout << b.getBrain()->getIdeas(0) << std::endl;
	std::cout << "\033[34m" << "c Constructors:" << "\033[0m" <<std::endl;
	//Dog c = b
	Dog c(b);
	std::cout << "\033[34m" << "c Initial idea:" << "\033[0m" <<std::endl;
	std::cout << c.getBrain()->getIdeas(0) << std::endl;
	std::cout << "\033[34m" << "Desstructors:" << "\033[0m" <<std::endl;
}
