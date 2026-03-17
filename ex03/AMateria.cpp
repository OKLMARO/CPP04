/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oamairi <oamairi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/16 17:16:21 by oamairi           #+#    #+#             */
/*   Updated: 2026/03/17 14:30:16 by oamairi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria()
{
	this->type = "Default";
	std::cout << "AMateria Default constructor called !\n";
}

AMateria::AMateria(std::string const &type)
{
	this->type = type;
	std::cout << "AMateria constructor called !\n";
}

AMateria::AMateria(AMateria const &old)
{
	this->type = old.type;
	std::cout << "AMateria copy constructor called !\n";
}

AMateria	&AMateria::operator=(AMateria const &old)
{
	(void) old;
	return *this;
}

void	AMateria::use(ICharacter &target)
{
	std::cout << "Type is not defined !\n";
}

std::string	const &AMateria::getType() const
{
	return this->type;
}

AMateria::~AMateria()
{
	std::cout << "AMateria destructor called !\n";
}
