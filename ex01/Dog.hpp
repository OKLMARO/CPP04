/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oamairi <oamairi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/12 14:26:23 by oamairi           #+#    #+#             */
/*   Updated: 2026/03/19 12:30:07 by oamairi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"

class Dog : public Animal
{
private:
	Brain *brain;
public:
	Dog();
	Dog(Dog const &old);
	void		makeSound(void) const;
	std::string	getIdea(int index);
	void		setIdea(std::string idea, int index);
	Dog	&operator=(Dog const &old);
	~Dog();
};
