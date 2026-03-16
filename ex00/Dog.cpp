/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oamairi <oamairi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/12 14:26:21 by oamairi           #+#    #+#             */
/*   Updated: 2026/03/16 12:12:43 by oamairi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal()
{
	this->_type = "Dog";
	std::cout << "Default Dog constructor called\n";
}

Dog::Dog(Dog const &old) : Animal(old)
{
	std::cout << "Dog copy constructor called\n";
}

Dog	&Dog::operator=(Dog const &old)
{
	Animal::operator=(old);
	std::cout << "Dog copy assigment called !\n";
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
