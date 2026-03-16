/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oamairi <oamairi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/16 12:24:06 by oamairi           #+#    #+#             */
/*   Updated: 2026/03/16 12:25:35 by oamairi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#pragma once

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
public:
	WrongCat();
	WrongCat(WrongCat const &old);
	void	makeSound(void) const;
	WrongCat	&operator=(WrongCat const &old);
	~WrongCat();
};
