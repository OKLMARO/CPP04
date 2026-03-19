/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oamairi <oamairi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/12 14:07:30 by oamairi           #+#    #+#             */
/*   Updated: 2026/03/19 13:47:40 by oamairi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "Animal.hpp"

int main()
{
	Animal* j = new Dog();
	Animal* i = new Cat();
	Cat* cat1 = new Cat();
	Cat* cat2 = new Cat(*cat1);
	Cat cat3 = *cat1;
	cat1->setIdea("Je suis cool", 0);
	cat2->setIdea("Je suis cool", 1);
	std::cout << i->getType() << "\n";
	std::cout << j->getType() << "\n";
	std::cout << j->getType() << "\n";
	std::cout << cat1->getType() << " a dit: " << cat1->getIdea(1) << "\n";
	std::cout << cat2->getType() << " a dit: " << cat2->getIdea(1) << "\n";
	std::cout << cat3.getType() << " a dit: " << cat3.getIdea(1) << "\n";
	cat3.setIdea("Je suis cool", 1);
	std::cout << cat1->getType() << " a dit: " << cat1->getIdea(1) << "\n";
	std::cout << cat3.getType() << " a dit: " << cat3.getIdea(1) << "\n";
	delete j;
	delete i;
	delete cat1;
	delete cat2;
	return 0;
}
