/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oamairi <oamairi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/12 14:26:03 by oamairi           #+#    #+#             */
/*   Updated: 2026/03/19 12:24:56 by oamairi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal("Cat")
{
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
	if (this != &old)
	{
		delete this->brain;
		this->brain = new Brain(*old.brain);
		std::cout << "Cat copy assigment called !\n";
	}
	return *this;
}

void	Cat::setIdea(std::string idea, int index)
{
	this->brain->setIdeas(idea, index);
}

std::string	Cat::getIdea(int index)
{
	return this->brain->getIdeas(index);
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
