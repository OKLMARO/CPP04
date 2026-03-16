/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oamairi <oamairi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/16 15:58:14 by oamairi           #+#    #+#             */
/*   Updated: 2026/03/16 16:56:37 by oamairi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal()
{
	this->brain = new Brain;
	std::cout << "Default AAnimal constructor called !\n";
}

AAnimal::AAnimal(AAnimal const &old)
{
	this->_type = old._type;
	this->brain = new Brain(*old.brain);
	std::cout << "AAnimal copy constructor called !\n";
}

AAnimal::AAnimal(std::string type)
{
	this->_type = type;
	this->brain = new Brain;
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
		delete this->brain;
		this->brain = new Brain(*old.brain);
		this->_type = old._type;
		std::cout << "AAnimal copy assigment called !\n";
	}
	return *this;
}

void	AAnimal::setIdea(std::string idea, int index)
{
	this->brain->setIdeas(idea, index);
}

std::string	AAnimal::getIdea(int index)
{
	return this->brain->getIdeas(index);
}

AAnimal::~AAnimal()
{
	delete this->brain;
	std::cout << "AAnimal destructor called !\n";
}
