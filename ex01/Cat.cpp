/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oamairi <oamairi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/12 14:26:03 by oamairi           #+#    #+#             */
/*   Updated: 2026/03/16 14:12:29 by oamairi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal()
{
	this->_type = "Cat";
	this->brain = new Brain;
	std::cout << "Default Cat constructor called\n";
}

Cat::Cat(Cat const &old) : Animal(old)
{
	this->brain = new Brain(*old.brain);
	std::cout << "Cat copy constructor called\n";
}

Cat	&Cat::operator=(Cat const &old)
{
	Animal::operator=(old);
	if (this != &old)
	{
		delete this->brain;
		this->brain = new Brain(*old.brain);
		std::cout << "Cat copy assigment called !\n";
	}
	return *this;
}

void	Cat::makeSound(void) const
{
	std::cout << "Miaou !\n";
}

Cat::~Cat()
{
	delete this->brain;
	std::cout << "Cat destructor called !\n";
}
