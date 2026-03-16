/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oamairi <oamairi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/12 14:26:21 by oamairi           #+#    #+#             */
/*   Updated: 2026/03/16 14:01:14 by oamairi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal()
{
	this->_type = "Dog";
	this->brain = new Brain;
	std::cout << "Default Dog constructor called\n";
}

Dog::Dog(Dog const &old) : Animal(old)
{
	this->brain = new Brain(*old.brain);
	std::cout << "Dog copy constructor called\n";
}

Dog	&Dog::operator=(Dog const &old)
{
	Animal::operator=(old);
	if (this != &old)
	{
		delete this->brain;
		this->brain = new Brain(*old.brain);
		std::cout << "Dog copy assigment called !\n";
	}
	return *this;
}

void	Dog::makeSound(void) const
{
	std::cout << "Waouf !\n";
}

Dog::~Dog()
{
	delete this->brain;
	std::cout << "Dog destructor called !\n";
}
