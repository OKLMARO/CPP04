/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oamairi <oamairi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/11 17:30:52 by oamairi           #+#    #+#             */
/*   Updated: 2026/03/12 14:30:35 by oamairi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
	std::cout << "Default Animal constructor called !\n";
}

Animal::Animal(Animal &old)
{
	*this = old;
}

Animal::Animal(std::string type)
{
	this->_type = type;
	std::cout << "Animal constructor called !\n";
}

Animal	&Animal::operator=(Animal &old)
{
	if (this != &old)
	{
		this->_type = old._type;
	}
	std::cout << "Animal copy assigment called !\n";
}

Animal::~Animal(){};
