/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oamairi <oamairi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/16 12:37:07 by oamairi           #+#    #+#             */
/*   Updated: 2026/03/16 14:28:46 by oamairi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Default Brain constructor called !\n";
}

Brain::Brain(Brain const &old)
{
	for (int i = 0; i < 100; i++)
	{
		this->ideas[i] = old.ideas[i];
	}
	std::cout << "Brain copy constructor called !\n";
}

Brain	&Brain::operator=(Brain const &old)
{
	if (this != &old)
	{
		for (int i = 0; i < 100; i++)
		{
			this->ideas[i] = old.ideas[i];
		}
		std::cout << "Brain copy assigment called !\n";
	}
	return *this;
}

void	Brain::setIdeas(std::string idea, int index)
{
	this->ideas[index] = idea;
}

std::string	Brain::getIdeas(int index)
{
	return this->ideas[index];
}

Brain::~Brain()
{
	std::cout << "Brain destructor called !\n";
}
