/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.class.hpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfuhlenb <vfuhlenb@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 17:49:11 by vfuhlenb          #+#    #+#             */
/*   Updated: 2023/03/13 12:37:08 by vfuhlenb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef DIAMONDTRAP_CLASS_H
# define DIAMONDTRAP_CLASS_H

#include <iostream>
#include "ClapTrap.class.hpp"
#include "ScavTrap.class.hpp"
#include "FragTrap.class.hpp"

class DiamondTrap : public FragTrap, public ScavTrap
{
	public:

		DiamondTrap(); // canonical Default Constructor
		DiamondTrap(std::string name); // canonical Parameter Constructor
		DiamondTrap(const DiamondTrap& src); // canonical Copy Constructor
		DiamondTrap&	operator=(const DiamondTrap& rhs); // canonical Assigment Constructor
		~DiamondTrap(); // canonical Destructor

		void			whoAmI();
		using			FragTrap::attack;

	private:

		std::string		_name;

};

#endif
