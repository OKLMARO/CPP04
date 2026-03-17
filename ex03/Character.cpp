/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oamairi <oamairi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/17 14:07:55 by oamairi           #+#    #+#             */
/*   Updated: 2026/03/17 14:45:47 by oamairi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Character.hpp"

Character::Character() : ICharacter()
{
	this->name = "Default";
	for (int i = 0; i < 4; i++)
		this->inventory[i] = NULL;
}

Character::Character(std::string name) : ICharacter()
{
	this->name = name;
	for (int i = 0; i < 4; i++)
		this->inventory[i] = NULL;
}

Character::Character(Character const &old) : ICharacter()
{
	this->name = old.name;
	for (int i = 0; i < 4; i++)
	{
		if (old.inventory[i])
			this->inventory[i] = old.inventory[i]->clone();
		else
			this->inventory[i] = NULL;
	}
}

Character	&Character::operator=(Character const &old)
{
	if (this != &old)
	{
		this->name = old.name;
		for (int i = 0; i < 4; i++)
		{
			delete this->inventory[i];
			if (old.inventory[i])
				this->inventory[i] = old.inventory[i]->clone();
			else
				this->inventory[i] = NULL;
		}
	}
	return *this;
}

void	Character::unequip(int idx)
{
	if (idx >= 0 && idx <= 3)
	{
		if (this->inventory[idx])
			this->inventory[idx] = NULL;
	}
}

void	Character::equip(AMateria *m)
{
	for (int i = 0; i < 4; i++)
	{
		if (!this->inventory[i])
		{
			this->inventory[i] = m;
			return ;
		}
	}
}

std::string	const &Character::getName() const
{
	return this->name;
}

void	Character::use(int idx, ICharacter& target)
{
	if (idx >= 0 && idx <= 3)
	{
		if (this->inventory[idx])
			this->inventory[idx]->use(target);
	}
}

Character::~Character()
{
	for (int i = 0; i < 4; i++)
	{
		if (this->inventory[i])
			delete this->inventory[i];
	}
}
