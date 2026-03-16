/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oamairi <oamairi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/11 17:30:55 by oamairi           #+#    #+#             */
/*   Updated: 2026/03/16 14:29:48 by oamairi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "Brain.hpp"

class Animal
{
protected:
	Brain*		brain;
	std::string	_type;
public:
	Animal();
	Animal(std::string type);
	Animal(Animal const &old);
	std::string		getIdea(int index);
	std::string		getType(void) const;
	virtual void	makeSound(void) const;
	Animal			&operator=(Animal const &old);
	void			setIdea(std::string idea, int index);
	virtual ~Animal();
};
