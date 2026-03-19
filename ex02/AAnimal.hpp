/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oamairi <oamairi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/16 15:58:10 by oamairi           #+#    #+#             */
/*   Updated: 2026/03/19 13:52:53 by oamairi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "Brain.hpp"

class AAnimal
{
protected:
	std::string	_type;
public:
	AAnimal();
	AAnimal(std::string type);
	AAnimal(AAnimal const &old);
	std::string		getType(void) const;
	virtual void	makeSound(void) const = 0;
	AAnimal			&operator=(AAnimal const &old);
	virtual ~AAnimal();
};
