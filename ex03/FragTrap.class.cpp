/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.class.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfuhlenb <vfuhlenb@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 15:56:38 by vfuhlenb          #+#    #+#             */
/*   Updated: 2023/03/13 12:29:47 by vfuhlenb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.class.hpp"
#include "FragTrap.class.hpp"

// CONSTRUCTORS

FragTrap::FragTrap() : ClapTrap()
{
	this->_health = _health_frag;
	this->_energy = _energy_frag;
	this->_attack = _attack_frag;
	std::cout << "\t\t[FragTrap] Default Constructor called" << std::endl;
	return;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name) // explicitly calling a non default constructor of base class
{
	this->_health = _health_frag;
	this->_energy = _energy_frag;
	this->_attack = _attack_frag;
	std::cout << "\t\t[FragTrap] String Constructor called" << std::endl;
	return;
}

FragTrap::~FragTrap()
{
	std::cout << "\t\t[FragTrap] Deconstructor called" << std::endl;
	return;
}

FragTrap::FragTrap(const FragTrap& src) : ClapTrap(src._name)
{
	*this = src;
	std::cout << "\t\t[FragTrap] Copy Constructor called" << std::endl;
	return;
}

FragTrap&	FragTrap::operator=(const FragTrap& rhs)
{
	if (this != &rhs)
	{
		this->_name = rhs._name;
		this->_health = rhs._health;
		this->_energy = rhs._energy;
		this->_attack = rhs._attack;
	}
	std::cout << "\t\t[FragTrap] Copy Assigment Constructor called" << std::endl;
	return *this;
}

// FUNCTIONS

void	FragTrap::highFivesGuys()
{
	std::cout
		<< "HI FIVE! from: "
		<< this->_name
	<< std::endl;
	return;
}

void	FragTrap::attack(const std::string& target)
{
	if (this->_energy && this->_health)
	{
		this->_energy--;
		std::cout
			<< "[FragTrap] "
			<< this->_name
			<< " attacks " << target
			<< ", causing " << this->_attack
			<< " points of damage!"
		<< std::endl;
		return;
	}
	std::cout
		<< "[FragTrap] "
		<< this->_name
		<< " has not enough power to attack." << std::endl;
	return;
}

// STATIC

const int	FragTrap::_health_frag = 100;
const int	FragTrap::_energy_frag = 100;
const int	FragTrap::_attack_frag = 30;
