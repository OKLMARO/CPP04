/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oamairi <oamairi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/12 14:26:03 by oamairi           #+#    #+#             */
/*   Updated: 2026/03/16 12:12:43 by oamairi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal()
{
	this->_type = "Cat";
	std::cout << "Default Cat constructor called\n";
}

Cat::Cat(Cat const &old) : Animal(old)
{
	std::cout << "Cat copy constructor called\n";
}

Cat	&Cat::operator=(Cat const &old)
{
	Animal::operator=(old);
	std::cout << "Cat copy assigment called !\n";
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
