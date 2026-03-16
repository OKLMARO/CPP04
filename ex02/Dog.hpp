/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oamairi <oamairi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/12 14:26:23 by oamairi           #+#    #+#             */
/*   Updated: 2026/03/16 16:05:47 by oamairi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AAnimal.hpp"

class Dog : public AAnimal
{
public:
	Dog();
	Dog(Dog const &old);
	void	makeSound(void) const;
	Dog	&operator=(Dog const &old);
	~Dog();
};
