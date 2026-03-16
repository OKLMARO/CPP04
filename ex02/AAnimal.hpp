/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oamairi <oamairi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/16 15:58:10 by oamairi           #+#    #+#             */
/*   Updated: 2026/03/16 16:03:10 by oamairi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "Brain.hpp"

class AAnimal
{
protected:
	Brain*		brain;
	std::string	_type;
public:
	AAnimal();
	AAnimal(std::string type);
	AAnimal(AAnimal const &old);
	std::string		getIdea(int index);
	std::string		getType(void) const;
	virtual void	makeSound(void) const = 0;
	AAnimal			&operator=(AAnimal const &old);
	void			setIdea(std::string idea, int index);
	virtual ~AAnimal();
};
