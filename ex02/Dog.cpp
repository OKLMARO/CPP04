/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oamairi <oamairi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/12 14:26:21 by oamairi           #+#    #+#             */
/*   Updated: 2026/03/16 16:28:25 by oamairi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : AAnimal("Dog")
{
	std::cout << "Default Dog constructor called\n";
}

Dog::Dog(Dog const &old) : AAnimal(old)
{
	std::cout << "Dog copy constructor called\n";
}

Dog	&Dog::operator=(Dog const &old)
{
	AAnimal::operator=(old);
	if (this != &old)
	{
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
	std::cout << "Dog destructor called !\n";
}
