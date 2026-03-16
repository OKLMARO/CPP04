/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oamairi <oamairi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/12 14:07:30 by oamairi           #+#    #+#             */
/*   Updated: 2026/03/16 14:33:44 by oamairi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "Animal.hpp"

int main()
{
	Animal* j = new Dog();
	Animal* i = new Cat();
	j->setIdea("Je suis cool", 0);
	j->setIdea("Je suis beau", 1);
	i->setIdea("Je suis mignon", 2);
	std::cout << i->getType() << " a dit: " << i->getIdea(2) << "\n";
	std::cout << j->getType() << " a dit: " << j->getIdea(0) << "\n";
	std::cout << j->getType() << " a dit: " << j->getIdea(1) << "\n";
	delete j;
	delete i;
	return 0;
}
