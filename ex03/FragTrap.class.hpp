/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.class.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfuhlenb <vfuhlenb@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 14:57:02 by vfuhlenb          #+#    #+#             */
/*   Updated: 2023/03/13 12:41:41 by vfuhlenb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef FRAGTRAP_CLASS_H
# define FRAGTRAP_CLASS_H

#include <iostream>
#include "ClapTrap.class.hpp"

class FragTrap : virtual public ClapTrap
{
	public:

		FragTrap(); // canonical Default Constructor
		FragTrap(std::string name); // canonical Parameter Constructor
		FragTrap(const FragTrap& src); // canonical Copy Constructor
		FragTrap&	operator=(const FragTrap& rhs); // canonical Assigment Constructor
		~FragTrap(); // canonical Destructor

		void	attack(const std::string& target);
		void	highFivesGuys();

	protected:

		static const int	_health_frag;
		static const int	_energy_frag;
		static const int	_attack_frag;

};

#endif
