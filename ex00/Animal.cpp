/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oamairi <oamairi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/11 17:30:52 by oamairi           #+#    #+#             */
/*   Updated: 2026/03/15 14:40:19 by oamairi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
	std::cout << "Default Animal constructor called !\n";
}

Animal::Animal(Animal const &old)
{
	this->_type = old._type;
	std::cout << "Animal copy constructor called !\n";
}

Animal::Animal(std::string type)
{
	this->_type = type;
	std::cout << "Animal constructor called !\n";
}

Animal	&Animal::operator=(Animal const &old)
{
	if (this != &old)
	{
		this->_type = old._type;
	}
	std::cout << "Animal copy assigment called !\n";
	return *this;
}

void	Animal::makeSound(void)
{
	std::cout << "Sound not defined ...\n";
}

Animal::~Animal()
{
	std::cout << "Animal destructor called !\n";
}
