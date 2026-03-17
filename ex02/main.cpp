/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oamairi <oamairi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/12 14:07:30 by oamairi           #+#    #+#             */
/*   Updated: 2026/03/17 15:38:53 by oamairi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "AAnimal.hpp"

int main()
{
	AAnimal* j = new Dog();
	AAnimal* i = new Cat();
	Cat* cat1 = new Cat();
	Cat* cat2 = new Cat(*cat1);
	Cat* cat3 = cat1;
	cat1->setIdea("Je suis cool", 0);
	cat2->setIdea("Je suis cool", 1);
	j->setIdea("Je suis cool", 0);
	j->setIdea("Je suis beau", 1);
	i->setIdea("Je suis mignon", 2);
	std::cout << i->getType() << " a dit: " << i->getIdea(2) << "\n";
	std::cout << j->getType() << " a dit: " << j->getIdea(0) << "\n";
	std::cout << j->getType() << " a dit: " << j->getIdea(1) << "\n";
	std::cout << cat1->getType() << " a dit: " << cat1->getIdea(1) << "\n";
	std::cout << cat2->getType() << " a dit: " << cat2->getIdea(1) << "\n";
	std::cout << cat3->getType() << " a dit: " << cat3->getIdea(1) << "\n";
	delete j;
	delete i;
	delete cat1;
	delete cat2;
	return 0;
}
