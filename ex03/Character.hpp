/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oamairi <oamairi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/16 17:33:47 by oamairi           #+#    #+#             */
/*   Updated: 2026/03/17 14:34:37 by oamairi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ICharacter.hpp"

class Character : public ICharacter
{
private:
	std::string	name;
	AMateria*	inventory[4];
public:
	Character();
	Character(std::string name);
	Character(Character const &old);
	void		unequip(int idx);
	void		equip(AMateria *m);
	std::string	const &getName() const;
	Character	&operator=(Character const &old);
	void		use(int idx, ICharacter& target);
	~Character();
};
