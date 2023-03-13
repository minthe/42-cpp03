/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.class.cpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfuhlenb <vfuhlenb@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 17:57:18 by vfuhlenb          #+#    #+#             */
/*   Updated: 2023/03/13 13:08:28 by vfuhlenb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "DiamondTrap.class.hpp"

// CONSTRUCTORS

DiamondTrap::DiamondTrap() : _name("NoName")
{
	ScavTrap::_name = this->_name + "_clap_name";
	this->_health = FragTrap::_health_frag;
	this->_energy = ScavTrap::_energy_scav;
	this->_attack = FragTrap::_attack_frag;
	std::cout << "\tDiamondTrap Default Constructor called" << std::endl;
	return;
}

DiamondTrap::DiamondTrap(std::string name) : _name(name) // explicitly calling a non default constructor of base class
{
	ScavTrap::_name = this->_name + "_clap_name";
	this->_health = FragTrap::_health_frag;
	this->_energy = ScavTrap::_energy_scav;
	this->_attack = FragTrap::_attack_frag;
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

// FUNCTIONS

void	DiamondTrap::whoAmI()
{
	std::cout
		<< "I am: "
		<< this->_name
		<< " , "
		<< ClapTrap::_name
	<< std::endl;
	return;
}
