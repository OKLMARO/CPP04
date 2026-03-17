/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oamairi <oamairi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/16 17:12:20 by oamairi           #+#    #+#             */
/*   Updated: 2026/03/17 15:33:38 by oamairi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "ICharacter.hpp"

class ICharacter;

class AMateria
{
protected:
	std::string type;
public:
	AMateria();
	AMateria(AMateria const &old);
	AMateria(std::string const &type);
	std::string		const &getType() const; //Returns the materia type
	virtual void	use(ICharacter &target);
	virtual			AMateria* clone() const = 0;
	AMateria		&operator=(AMateria const &old);
	virtual ~AMateria();
};
