/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.class.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfuhlenb <vfuhlenb@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 12:53:29 by vfuhlenb          #+#    #+#             */
/*   Updated: 2023/03/12 16:52:39 by vfuhlenb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.class.hpp"

// CONSTRUCTORS

ClapTrap::ClapTrap() : _name("ClapTrap"), _health(10), _energy(10), _attack(0)
{
	this->_instance = ++_nbInstance;
	std::cout
		<< "\t\tDefault Constructor called for: "
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
		<< "\t\tClapTrap Regular Constructor called for: "
		<< this->_name
	<< std::endl;
	this->_instance = ++_nbInstance;
	return;
}

ClapTrap::~ClapTrap()
{
	std::cout
		<< "\t\t ClapTrap Deconstructor called for: "
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
		<< "\t\tClapTrap Copy Constructor called with: "
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
			<< "\t\tClapTrap Copy Assigment Constructor called with: "
			<< rhs._name
			<< " replacing: "
			<< this->_name
		<< std::endl;
		this->_name = rhs._name;
		this->_health = 10;
		this->_energy = 10;
		this->_attack = 0;
	}
	else
		std::cout << "\t\tClapTrap Copy Assigment Constructor called" << std::endl;
	return *this;
}

// FUNCTIONS

void	ClapTrap::attack(const std::string& target)
{
	if (this->_energy && this->_health)
	{
		this->_energy--;
		std::cout
			<< this->_name
			<< " attacks " << target
			<< ", causing " << this->_attack
			<< " points of damage!"
		<< std::endl;
		return;
	}
	std::cout
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
			<< this->_name << " repairs itself. "
			<< --this->_energy << " points of energy left. "
			<< this->_health << " health points gained."
		<< std::endl;
		return;
	}
	std::cout
		<< this->_name
		<< " has not enough power to be repaired."
	<< std::endl;
	return;
}

// STATIC

int		ClapTrap::_nbInstance = 0;