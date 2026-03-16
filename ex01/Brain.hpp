/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oamairi <oamairi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/16 12:37:20 by oamairi           #+#    #+#             */
/*   Updated: 2026/03/16 14:27:59 by oamairi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Brain
{
private:
	std::string ideas[100];
public:
	Brain();
	Brain(Brain const &old);
	std::string	getIdeas(int index);
	Brain		&operator=(Brain const &old);
	void		setIdeas(std::string ideas, int index);
	~Brain();
};
