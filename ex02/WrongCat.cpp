/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oamairi <oamairi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/16 12:22:50 by oamairi           #+#    #+#             */
/*   Updated: 2026/03/16 12:25:55 by oamairi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal()
{
	this->_type = "WrongCat";
	std::cout << "Default WrongCat constructor called\n";
}

WrongCat::WrongCat(WrongCat const &old) : WrongAnimal(old)
{
	std::cout << "WrongCat copy constructor called\n";
}

WrongCat	&WrongCat::operator=(WrongCat const &old)
{
	WrongAnimal::operator=(old);
	std::cout << "WrongCat copy assigment called !\n";
	return *this;
}

void	WrongCat::makeSound(void) const
{
	std::cout << "Miaou !\n";
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat destructor called !\n";
}
