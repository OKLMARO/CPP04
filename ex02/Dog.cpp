/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oamairi <oamairi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/12 14:26:21 by oamairi           #+#    #+#             */
/*   Updated: 2026/03/19 13:56:17 by oamairi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : AAnimal("Dog")
{
	this->brain = new Brain;
	std::cout << "Default Dog constructor called\n";
}

Dog::Dog(Dog const &old) : AAnimal(old)
{
	this->brain = new Brain(*old.brain);
	std::cout << "Dog copy constructor called\n";
}

Dog	&Dog::operator=(Dog const &old)
{
	if (this != &old)
	{
		delete this->brain;
		this->brain = new Brain(*old.brain);
		std::cout << "Dog copy assigment called !\n";
	}
	return *this;
}

void	Dog::setIdea(std::string idea, int index)
{
	this->brain->setIdeas(idea, index);
}

std::string	Dog::getIdea(int index)
{
	return this->brain->getIdeas(index);
}

void	Dog::makeSound(void) const
{
	std::cout << "Miaou !\n";
}

Dog::~Dog()
{
	delete this->brain;
	std::cout << "Dog destructor called !\n";
}
