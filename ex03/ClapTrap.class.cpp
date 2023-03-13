/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.class.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfuhlenb <vfuhlenb@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 12:53:29 by vfuhlenb          #+#    #+#             */
/*   Updated: 2023/03/13 12:38:06 by vfuhlenb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.class.hpp"

// CONSTRUCTORS

ClapTrap::ClapTrap() : _name("NoName"), _health(10), _energy(10), _attack(0)
{
	this->_instance = ++_nbInstance;
	std::cout
		<< "\t\t\t[ClapTrap] Default Constructor called for: "
		<< this->_name
		<< " (#"
		<< this->_instance
		<< ")"
	<< std::endl;
	return;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _health(10), _energy(10), _attack(0)
{
	std::cout
		<< "\t\t\t[ClapTrap] Regular Constructor called for: "
		<< this->_name
	<< std::endl;
	this->_instance = ++_nbInstance;
	return;
}

ClapTrap::~ClapTrap()
{
	std::cout
		<< "\t\t\t[ClapTrap] Deconstructor called for: "
		<< this->_name
		<< " (#"
		<< this->_instance
		<< ")"
	<< std::endl;
	return;
}

ClapTrap::ClapTrap(const ClapTrap& src)
{
	std::cout
		<< "\t\t\t[ClapTrap] Copy Constructor called with: "
		<< src._name
		<< " replacing: "
		<< this->_name
	<< std::endl;
	*this = src;
	return;
}

ClapTrap&	ClapTrap::operator=(const ClapTrap& rhs)
{
	if (this != &rhs)
	{
		std::cout
			<< "\t\t\t[ClapTrap] Copy Assigment Constructor called with: "
			<< rhs._name
			<< " replacing: "
			<< this->_name
		<< std::endl;
		this->_name = rhs._name;
		this->_health = rhs._health;
		this->_energy = rhs._energy;
		this->_attack = rhs._attack;
	}
	else
		std::cout << "\t\t\t[ClapTrap] Copy Assigment Constructor called" << std::endl;
	return *this;
}

// FUNCTIONS

void	ClapTrap::attack(const std::string& target)
{
	if (this->_energy && this->_health)
	{
		this->_energy--;
		std::cout
			<< "[ClapTrap] "
			<< this->_name
			<< " attacks " << target
			<< ", causing " << this->_attack
			<< " points of damage!"
		<< std::endl;
		return;
	}
	std::cout
		<< "[ClapTrap] "
		<< this->_name
		<< " has not enough power to attack." << std::endl;
	return;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_health > amount)
		this->_health -= amount;
	else
		this->_health = 0;
	std::cout
		<< "[ClapTrap] "
		<< this->_name
		<< " got damaged, causing " << amount
		<< " points of damage!"
	<< std::endl;
	return;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_energy && this->_health)
	{
		this->_health += amount;
		std::cout
			<< "[ClapTrap] "
			<< this->_name << " repairs itself. "
			<< --this->_energy << " points of energy left. "
			<< this->_health << " health points gained."
		<< std::endl;
		return;
	}
	std::cout
		<< "[ClapTrap] "
		<< this->_name
		<< " has not enough power to be repaired."
	<< std::endl;
	return;
}

int	ClapTrap::getHealth() const
{
	return this->_health;
}

int	ClapTrap::getEnergy() const
{
	return this->_energy;
}

int	ClapTrap::getAttack() const
{
	return this->_attack;
}

std::string	ClapTrap::getName() const
{
	return (this->_name);
}

// STATIC

int		ClapTrap::_nbInstance = 0;