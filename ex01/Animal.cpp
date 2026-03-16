/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oamairi <oamairi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/11 17:30:52 by oamairi           #+#    #+#             */
/*   Updated: 2026/03/16 16:15:34 by oamairi          ###   ########.fr       */
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
	this->brain = new Brain(*old.brain);
	std::cout << "Animal copy constructor called !\n";
}

Animal::Animal(std::string type)
{
	this->_type = type;
	this->brain = new Brain;
	std::cout << "Animal constructor called !\n";
}

std::string	Animal::getType(void) const
{
	return this->_type;
}

Animal	&Animal::operator=(Animal const &old)
{
	if (this != &old)
	{
		delete this->brain;
		this->brain = new Brain(*old.brain);
		this->_type = old._type;
	}
	std::cout << "Animal copy assigment called !\n";
	return *this;
}

void	Animal::makeSound(void) const
{
	std::cout << "Sound not defined ...\n";
}

void	Animal::setIdea(std::string idea, int index)
{
	this->brain->setIdeas(idea, index);
}

std::string	Animal::getIdea(int index)
{
	return this->brain->getIdeas(index);
}

Animal::~Animal()
{
	delete this->brain;
	std::cout << "Animal destructor called !\n";
}
