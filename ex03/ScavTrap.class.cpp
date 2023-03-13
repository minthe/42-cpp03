/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.class.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfuhlenb <vfuhlenb@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 15:56:38 by vfuhlenb          #+#    #+#             */
/*   Updated: 2023/03/13 09:16:25 by vfuhlenb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.class.hpp"
#include "ScavTrap.class.hpp"

// CONSTRUCTORS

ScavTrap::ScavTrap() : ClapTrap()
{
	this->_health = _health_scav;
	this->_energy = _energy_scav;
	this->_attack = _attack_scav;
	std::cout << "\t\tScavTrap Default Constructor called" << std::endl;
	return;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name) // explicitly calling a non default constructor of base class
{
	this->_health = _health_scav;
	this->_energy = _energy_scav;
	this->_attack = _attack_scav;
	std::cout << "\t\tScavTrap String Constructor called" << std::endl;
	return;
}

ScavTrap::~ScavTrap()
{
	std::cout << "\t\tScavTrap Deconstructor called" << std::endl;
	return;
}

ScavTrap::ScavTrap(const ScavTrap& src)
{
	*this = src;
	std::cout << "\t\tScavTrap Copy Constructor called" << std::endl;
	return;
}

ScavTrap&	ScavTrap::operator=(const ScavTrap& rhs)
{
	if (this != &rhs)
	{
		this->_name = rhs._name;
		this->_health = rhs._health;
		this->_energy = rhs._energy;
		this->_attack = rhs._attack;
	}
	std::cout << "\t\tScavTrap Copy Assigment Constructor called" << std::endl;
	return *this;
}

// FUNCTIONS

void	ScavTrap::attack(const std::string& target)
{
	if (this->_energy && this->_health)
	{
		this->_energy--;
		std::cout
			<< "ScavTrap "
			<< this->_name
			<< " attacks " << target
			<< ", causing " << this->_attack
			<< " points of damage!"
		<< std::endl;
		return;
	}
	std::cout
		<< "ScavTrap "
		<< this->_name
		<< " has not enough power to attack." << std::endl;
	return;
}

void	ScavTrap::guardGate()
{
	std::cout << "ScavTrap is now in Gate keeper mode." << std::endl;
	return;
}

// STATIC

const int ScavTrap::_health_scav = 100;
const int ScavTrap::_energy_scav = 50;
const int ScavTrap::_attack_scav = 20;
