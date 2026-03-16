/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oamairi <oamairi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/12 14:26:23 by oamairi           #+#    #+#             */
/*   Updated: 2026/03/16 12:12:43 by oamairi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"

class Dog : public Animal
{
public:
	Dog();
	Dog(Dog const &old);
	void	makeSound(void) const;
	Dog	&operator=(Dog const &old);
	~Dog();
};
