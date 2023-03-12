/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.class.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfuhlenb <vfuhlenb@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 14:57:02 by vfuhlenb          #+#    #+#             */
/*   Updated: 2023/03/12 16:47:45 by vfuhlenb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef SCAVTRAP_CLASS_H
# define SCAVTRAP_CLASS_H

#include <iostream>
#include "ClapTrap.class.hpp"

class ScavTrap : public ClapTrap
{
	public:

		ScavTrap(); // canonical Default Constructor
		ScavTrap(std::string name); // canonical Parameter Constructor
		ScavTrap(const ScavTrap& src); // canonical Copy Constructor
		ScavTrap&	operator=(const ScavTrap& rhs); // canonical Assigment Constructor
		~ScavTrap(); // canonical Destructor

		void	guardGate();
		void	attack(const std::string& target);

	private:

};

#endif
