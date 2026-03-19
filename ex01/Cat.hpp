/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oamairi <oamairi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/12 14:26:06 by oamairi           #+#    #+#             */
/*   Updated: 2026/03/19 12:30:18 by oamairi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"

class Cat : public Animal
{
private:
	Brain *brain;
public:
	Cat();
	Cat(Cat const &old);
	void		makeSound(void) const;
	std::string	getIdea(int index);
	void		setIdea(std::string idea, int index);
	Cat	&operator=(Cat const &old);
	~Cat();
};
