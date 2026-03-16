/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oamairi <oamairi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/12 14:26:03 by oamairi           #+#    #+#             */
/*   Updated: 2026/03/16 16:20:27 by oamairi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : AAnimal("Cat")
{
	std::cout << "Default Cat constructor called\n";
}

Cat::Cat(Cat const &old) : AAnimal(old)
{
	std::cout << "Cat copy constructor called\n";
}

Cat	&Cat::operator=(Cat const &old)
{
	AAnimal::operator=(old);
	if (this != &old)
	{
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
	std::cout << "Cat destructor called !\n";
}
