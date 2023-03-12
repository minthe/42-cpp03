/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.class.cpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfuhlenb <vfuhlenb@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 17:57:18 by vfuhlenb          #+#    #+#             */
/*   Updated: 2023/03/12 18:01:17 by vfuhlenb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.class.hpp"
#include "FragTrap.class.hpp"
#include "ScavTrap.class.hpp"
#include "DiamondTrap.class.hpp"

// CONSTRUCTORS

DiamondTrap::DiamondTrap() : ClapTrap("DiamondTrap")
{
	this->_health = FragTrap::_health;
	std::cout << "\tDiamondTrap Default Constructor called" << std::endl;
	return;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name) // explicitly calling a non default constructor of base class
{
	this->_health = 100;
	this->_energy = 100;
	this->_attack = 30;
	std::cout << "\tDiamondTrap String Constructor called" << std::endl;
	return;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "\tDiamondTrap Deconstructor called" << std::endl;
	return;
}

DiamondTrap::DiamondTrap(const DiamondTrap& src)
{
	*this = src;
	std::cout << "\tDiamondTrap Copy Constructor called" << std::endl;
	return;
}

DiamondTrap&	DiamondTrap::operator=(const DiamondTrap& rhs)
{
	if (this != &rhs)
	{
		this->_name = rhs._name;
		this->_health = rhs._health;
		this->_energy = rhs._energy;
		this->_attack = rhs._attack;
	}
	std::cout << "\tDiamondTrap Copy Assigment Constructor called" << std::endl;
	return *this;
}
