/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongDog.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oamairi <oamairi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/16 12:24:33 by oamairi           #+#    #+#             */
/*   Updated: 2026/03/16 12:26:26 by oamairi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongDog.hpp"

WrongDog::WrongDog() : WrongAnimal()
{
	this->_type = "WrongDog";
	std::cout << "Default WrongDog constructor called\n";
}

WrongDog::WrongDog(WrongDog const &old) : WrongAnimal(old)
{
	std::cout << "WrongDog copy constructor called\n";
}

WrongDog	&WrongDog::operator=(WrongDog const &old)
{
	WrongAnimal::operator=(old);
	std::cout << "WrongDog copy assigment called !\n";
	return *this;
}

void	WrongDog::makeSound(void) const
{
	std::cout << "Waouf !\n";
}

WrongDog::~WrongDog()
{
	std::cout << "WrongDog destructor called !\n";
}
