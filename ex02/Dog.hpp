/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oamairi <oamairi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/12 14:26:23 by oamairi           #+#    #+#             */
/*   Updated: 2026/03/19 13:54:13 by oamairi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AAnimal.hpp"

class Dog : public AAnimal
{
private:
	Brain *brain;
public:
	Dog();
	Dog(Dog const &old);
	std::string	getIdea(int index);
	void		makeSound(void) const;
	void		setIdea(std::string idea, int index);
	Dog	&operator=(Dog const &old);
	~Dog();
};
