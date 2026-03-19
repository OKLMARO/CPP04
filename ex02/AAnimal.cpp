/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oamairi <oamairi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/16 15:58:14 by oamairi           #+#    #+#             */
/*   Updated: 2026/03/19 13:55:54 by oamairi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal()
{
	std::cout << "Default AAnimal constructor called !\n";
}

AAnimal::AAnimal(AAnimal const &old)
{
	this->_type = old._type;
	std::cout << "AAnimal copy constructor called !\n";
}

AAnimal::AAnimal(std::string type)
{
	this->_type = type;
	std::cout << "AAnimal constructor called !\n";
}

std::string	AAnimal::getType(void) const
{
	return this->_type;
}

AAnimal	&AAnimal::operator=(AAnimal const &old)
{
	if (this != &old)
	{
		this->_type = old._type;
		std::cout << "AAnimal copy assigment called !\n";
	}
	return *this;
}

AAnimal::~AAnimal()
{
	std::cout << "AAnimal destructor called !\n";
}
