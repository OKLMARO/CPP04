/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oamairi <oamairi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/17 13:32:59 by oamairi           #+#    #+#             */
/*   Updated: 2026/03/17 15:25:55 by oamairi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "IMateriaSource.hpp"
#include "AMateria.hpp"
#include "Cure.hpp"
#include "Ice.hpp"

class MateriaSource : public IMateriaSource
{
private:
	AMateria*	learned[4];
public:
	MateriaSource();
	MateriaSource(MateriaSource const &old);
	void			learnMateria(AMateria *m);
	MateriaSource	&operator=(MateriaSource const &old);
	AMateria		*createMateria(std::string const & type);
	~MateriaSource();
};
