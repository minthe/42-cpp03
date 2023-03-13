/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.class.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfuhlenb <vfuhlenb@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 12:53:27 by vfuhlenb          #+#    #+#             */
/*   Updated: 2023/03/13 12:37:23 by vfuhlenb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef CLAPTRAP_CLASS_H
# define CLAPTRAP_CLASS_H

#include <iostream>

class ClapTrap {

	public:

		ClapTrap(); // canonical Default Constructor
		ClapTrap(std::string name); // canonical Parameter Constructor
		ClapTrap(const ClapTrap& src); // canonical Copy Constructor
		ClapTrap&	operator=(const ClapTrap& rhs); // canonical Assigment Constructor
		~ClapTrap(); // canonical Destructor

		void			attack(const std::string& target);
		void			takeDamage(unsigned int amount);
		void			beRepaired(unsigned int amount);
		std::string		getName() const;
		int				getHealth() const;
		int				getEnergy() const;
		int				getAttack() const;

	protected:

		std::string		_name;
		unsigned int	_health;
		unsigned int	_energy;
		unsigned int	_attack;

	private:

		int				_instance;
		static	int		_nbInstance;

};

#endif
