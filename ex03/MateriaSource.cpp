/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oamairi <oamairi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/17 15:05:46 by oamairi           #+#    #+#             */
/*   Updated: 2026/03/17 15:27:59 by oamairi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"


MateriaSource::MateriaSource() : IMateriaSource()
{
	for (int i = 0; i < 4; i++)
		this->learned[i] = NULL;
}

MateriaSource::MateriaSource(MateriaSource const &old) : IMateriaSource()
{
	for (int i = 0; i < 4; i++)
	{
		if (old.learned[i])
			this->learned[i] = old.learned[i]->clone();
		else
			this->learned[i] = NULL;
	}
}

void	MateriaSource::learnMateria(AMateria *m)
{
	for (int i = 0; i < 4; i++)
	{
		if (!this->learned[i])
		{
			this->learned[i] = m->clone();
			return ;
		}
	}
}

MateriaSource	&MateriaSource::operator=(MateriaSource const &old)
{
	if (this != &old)
	{
		for (int i = 0; i < 4; i++)
		{
			delete this->learned[i];
			if (old.learned[i])
				this->learned[i] = old.learned[i]->clone();
			else
				this->learned[i] = NULL;
		}
	}
	return *this;
}

AMateria	*MateriaSource::createMateria(std::string const & type)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->learned[i] && this->learned[i]->getType() == type)
			return this->learned[i]->clone();
	}
	return NULL;
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < 4; i++)
	{
		if (this->learned[i])
			delete this->learned[i];
	}
}
