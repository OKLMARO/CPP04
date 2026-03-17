/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oamairi <oamairi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/16 12:21:06 by oamairi           #+#    #+#             */
/*   Updated: 2026/03/17 15:39:35 by oamairi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	std::cout << "Default WrongAnimal constructor called !\n";
}

WrongAnimal::WrongAnimal(WrongAnimal const &old)
{
	this->_type = old._type;
	std::cout << "WrongAnimal copy constructor called !\n";
}

WrongAnimal::WrongAnimal(std::string type)
{
	this->_type = type;
	std::cout << "WrongAnimal constructor called !\n";
}

std::string	WrongAnimal::getType(void) const
{
	return this->_type;
}

WrongAnimal	&WrongAnimal::operator=(WrongAnimal const &old)
{
	if (this != &old)
	{
		this->_type = old._type;
	}
	std::cout << "WrongAnimal copy assigment called !\n";
	return *this;
}

void	WrongAnimal::makeSound(void) const
{
	std::cout << "Sound not defined ...\n";
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal destructor called !\n";
}

