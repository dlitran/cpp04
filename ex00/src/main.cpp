/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlitran <dlitran@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 17:19:52 by dlitran           #+#    #+#             */
/*   Updated: 2024/08/13 18:58:09 by dlitran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Dog.hpp"
#include "../inc/Cat.hpp"
#include "../inc/WrongCat.hpp"

#define RESET   "\033[0m"
#define BLACK   "\033[30m"      /* Black */
#define RED     "\033[31m"      /* Red */
#define GREEN   "\033[32m"      /* Green */
#define YELLOW  "\033[33m"      /* Yellow */
#define BLUE    "\033[34m"      /* Blue */
#define MAGENTA "\033[35m"      /* Magenta */
#define CYAN    "\033[36m"      /* Cyan */
#define WHITE   "\033[37m"      /* White */
#define RESET   "\033[0m"      /* Reset */


int main()
{
	std::cout << RED << "Animal tests:" << RESET <<std::endl;
	std::cout << BLUE << "Constructors:" << RESET <<std::endl;
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	std::cout << BLUE << "getType():" << RESET <<std::endl;
	std::cout << "getType() from Dog:" << std::endl;
	std::cout << j->getType() << " " << std::endl;
	std::cout << "getType() from Cat:" << std::endl;
	std::cout << i->getType() << " " << std::endl;
	std::cout << "getType() from Animal:" << std::endl;
	std::cout << meta->getType() << " " << std::endl;

	std::cout << BLUE << "makeSound():" << RESET <<std::endl;
	std::cout << "makeSound() from Cat:" << std::endl;
	i->makeSound(); //will output the cat sound!
	std::cout << "makeSound() from Dog:" << std::endl;
	j->makeSound();
	std::cout << "makeSound() from Animal:" << std::endl;
	meta->makeSound();
	std::cout << BLUE << "Destructors:" << RESET <<std::endl;
	delete meta;
	delete i;
	delete j;
	std::cout << std::endl;
	std::cout << RED << "Wrong Animal tests:" << RESET <<std::endl;
	std::cout << BLUE << "Constructors:" << RESET <<std::endl;
	const WrongAnimal* w = new WrongAnimal();
	const WrongAnimal* k = new WrongCat();
	std::cout << BLUE << "getType():" << RESET <<std::endl; //La funcion solo existe en WrongAnimal, por lo tanto no da problemas.
	std::cout << "getType() from WrongCat:" << std::endl;
	std::cout << k->getType() << " " << std::endl;
	std::cout << "getType() from WrongAnimal:" << std::endl;
	std::cout << w->getType() << " " << std::endl;
	std::cout << BLUE << "makeSound():" << RESET <<std::endl;
	std::cout << "makeSound() from WrongCat:" << std::endl; //Aqui es donde hay problemas, el programa llama a la funcion de WrongAnimal, ya que es el objeto es de tipo WrongAnimal, pero hemos usado un constructor de WrongCat.
	k->makeSound(); //will output the Animal sound!
	std::cout << "makeSound() from WrongAnimal:" << std::endl;
	w->makeSound();
	std::cout << BLUE << "Destructors:" << RESET <<std::endl;
	delete w;
	delete k;
	return (0);
}