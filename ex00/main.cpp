/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oamairi <oamairi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/12 14:07:30 by oamairi           #+#    #+#             */
/*   Updated: 2026/03/16 12:29:04 by oamairi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "Animal.hpp"
#include "WrongCat.hpp"
#include "WrongDog.hpp"
#include "WrongAnimal.hpp"

int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound();
	j->makeSound();
	meta->makeSound();

	delete meta;
	delete j;
	delete i;

	const WrongAnimal* wrongmeta = new WrongAnimal();
	const WrongAnimal* wrongj = new WrongDog();
	const WrongAnimal* wrongi = new WrongCat();
	std::cout << wrongj->getType() << " " << std::endl;
	std::cout << wrongi->getType() << " " << std::endl;
	wrongi->makeSound();
	wrongj->makeSound();
	wrongmeta->makeSound();

	delete wrongmeta;
	delete wrongj;
	delete wrongi;
	return 0;
}
