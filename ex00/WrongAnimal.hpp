/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oamairi <oamairi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/16 12:21:29 by oamairi           #+#    #+#             */
/*   Updated: 2026/03/16 12:22:38 by oamairi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class WrongAnimal
{
protected:
	std::string _type;
public:
	WrongAnimal();
	WrongAnimal(std::string type);
	WrongAnimal(WrongAnimal const &old);
	std::string	getType(void) const;
	void	makeSound(void) const;
	WrongAnimal	&operator=(WrongAnimal const &old);
	virtual ~WrongAnimal();
};
