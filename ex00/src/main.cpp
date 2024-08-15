/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlitran <dlitran@student.42barcelona.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 17:19:52 by dlitran           #+#    #+#             */
/*   Updated: 2024/08/15 13:35:08 by dlitran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Dog.hpp"
#include "../inc/Cat.hpp"
#include "../inc/WrongCat.hpp"

int main()
{
	std::cout << "\033[31m" << "Animal tests:" << "\033[0m" <<std::endl;
	std::cout << "\033[34m" << "Constructors:" << "\033[0m" <<std::endl;
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	std::cout << "\033[34m" << "getType():" << "\033[0m" <<std::endl;
	std::cout << "getType() from Dog:" << std::endl;
	std::cout << j->getType() << " " << std::endl;
	std::cout << "getType() from Cat:" << std::endl;
	std::cout << i->getType() << " " << std::endl;
	std::cout << "getType() from Animal:" << std::endl;
	std::cout << meta->getType() << " " << std::endl;

	std::cout << "\033[34m" << "makeSound():" << "\033[0m" <<std::endl;
	std::cout << "makeSound() from Cat:" << std::endl;
	i->makeSound(); //will output the cat sound!
	std::cout << "makeSound() from Dog:" << std::endl;
	j->makeSound();
	std::cout << "makeSound() from Animal:" << std::endl;
	meta->makeSound();
	std::cout << "\033[34m" << "Destructors:" << "\033[0m" <<std::endl;
	delete meta;
	delete i;
	delete j;
	std::cout << std::endl;
	std::cout << "\033[31m" << "Wrong Animal tests:" << "\033[0m" <<std::endl;
	std::cout << "\033[34m" << "Constructors:" << "\033[0m" <<std::endl;
	const WrongAnimal* w = new WrongAnimal();
	const WrongAnimal* k = new WrongCat();
	std::cout << "\033[34m" << "getType():" << "\033[0m" <<std::endl; //La funcion solo existe en WrongAnimal, por lo tanto no da problemas.
	std::cout << "getType() from WrongCat:" << std::endl;
	std::cout << k->getType() << " " << std::endl;
	std::cout << "getType() from WrongAnimal:" << std::endl;
	std::cout << w->getType() << " " << std::endl;
	std::cout << "\033[34m" << "makeSound():" << "\033[0m" <<std::endl;
	std::cout << "makeSound() from WrongCat:" << std::endl; //Aqui es donde hay problemas, el programa llama a la funcion de WrongAnimal, ya que es el objeto es de tipo WrongAnimal, pero hemos usado un constructor de WrongCat.
	k->makeSound(); //will output the Animal sound!
	std::cout << "makeSound() from WrongAnimal:" << std::endl;
	w->makeSound();
	std::cout << "\033[34m" << "Destructors:" << "\033[0m" <<std::endl;
	delete w;
	delete k;
	return (0);
}
