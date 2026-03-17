/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oamairi <oamairi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/16 17:16:21 by oamairi           #+#    #+#             */
/*   Updated: 2026/03/17 15:34:00 by oamairi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria()
{
	this->type = "Default";
}

AMateria::AMateria(std::string const &type)
{
	this->type = type;
}

AMateria::AMateria(AMateria const &old)
{
	this->type = old.type;
}

AMateria	&AMateria::operator=(AMateria const &old)
{
	(void) old;
	return *this;
}

void	AMateria::use(ICharacter &target)
{
	(void) target;
}

std::string	const &AMateria::getType() const
{
	return this->type;
}

AMateria::~AMateria(){};
