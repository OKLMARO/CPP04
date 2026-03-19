/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oamairi <oamairi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/12 14:26:06 by oamairi           #+#    #+#             */
/*   Updated: 2026/03/19 13:54:05 by oamairi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AAnimal.hpp"

class Cat : public AAnimal
{
private:
	Brain *brain;
public:
	Cat();
	Cat(Cat const &old);
	std::string	getIdea(int index);
	void		makeSound(void) const;
	void		setIdea(std::string idea, int index);
	Cat	&operator=(Cat const &old);
	~Cat();
};
