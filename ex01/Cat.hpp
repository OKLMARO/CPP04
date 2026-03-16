/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oamairi <oamairi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/12 14:26:06 by oamairi           #+#    #+#             */
/*   Updated: 2026/03/16 14:12:09 by oamairi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"

class Cat : public Animal
{
public:
	Cat();
	Cat(Cat const &old);
	void	makeSound(void) const;
	Cat	&operator=(Cat const &old);
	~Cat();
};
