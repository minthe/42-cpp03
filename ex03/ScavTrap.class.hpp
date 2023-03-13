/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.class.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfuhlenb <vfuhlenb@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 14:57:02 by vfuhlenb          #+#    #+#             */
/*   Updated: 2023/03/13 09:11:38 by vfuhlenb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef SCAVTRAP_CLASS_H
# define SCAVTRAP_CLASS_H

#include <iostream>
#include "ClapTrap.class.hpp"

class ScavTrap : virtual public ClapTrap
{
	public:

		ScavTrap(); // canonical Default Constructor
		ScavTrap(std::string name); // canonical Parameter Constructor
		ScavTrap(const ScavTrap& src); // canonical Copy Constructor
		ScavTrap&	operator=(const ScavTrap& rhs); // canonical Assigment Constructor
		~ScavTrap(); // canonical Destructor

		void	guardGate();
		void	attack(const std::string& target);

	protected:

		static const int	_health_scav;
		static const int	_energy_scav;
		static const int	_attack_scav;

};

#endif
