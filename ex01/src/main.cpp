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
	for (int i = 0; i < array_size; i++)
	{
		delete a[i];
	}
	Dog b;
	std::cout << b.getBrain()->getIdeas(0) << std::endl;
	b.getBrain()->setIdeas(0, "Happy idea");
	std::cout << b.getBrain()->getIdeas(0) << std::endl;
	//Dog c = b
	Dog c(b);
	std::cout << c.getBrain()->getIdeas(0) << std::endl;

}
