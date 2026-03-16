/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oamairi <oamairi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/11 17:30:55 by oamairi           #+#    #+#             */
/*   Updated: 2026/03/16 12:12:43 by oamairi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Animal
{
protected:
	std::string _type;
public:
	Animal();
	Animal(std::string type);
	Animal(Animal const &old);
	std::string	getType(void) const;
	virtual void	makeSound(void) const;
	Animal	&operator=(Animal const &old);
	virtual ~Animal();
};
