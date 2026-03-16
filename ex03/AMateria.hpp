/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oamairi <oamairi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/16 17:12:20 by oamairi           #+#    #+#             */
/*   Updated: 2026/03/16 17:36:58 by oamairi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "ICharacter.hpp"

class AMateria
{
protected:

public:
	AMateria();
	AMateria(std::string const &type);
	virtual void	use(ICharacter& target);
	std::string		const & getType() const; //Returns the materia type
	virtual			AMateria* clone() const = 0;
	AMateria		&operator=(AMateria const &old);
	~AMateria();
};
