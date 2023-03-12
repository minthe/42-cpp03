/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.class.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfuhlenb <vfuhlenb@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 15:56:38 by vfuhlenb          #+#    #+#             */
/*   Updated: 2023/03/12 17:38:35 by vfuhlenb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.class.hpp"
#include "FragTrap.class.hpp"

// CONSTRUCTORS

FragTrap::FragTrap() : ClapTrap("FragTrap")
{
	this->_health = 100;
	this->_energy = 100;
	this->_attack = 30;
	std::cout << "\tFragTrap Default Constructor called" << std::endl;
	return;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name) // explicitly calling a non default constructor of base class
{
	this->_health = 100;
	this->_energy = 100;
	this->_attack = 30;
	std::cout << "\tFragTrap String Constructor called" << std::endl;
	return;
}

FragTrap::~FragTrap()
{
	std::cout << "\tFragTrap Deconstructor called" << std::endl;
	return;
}

FragTrap::FragTrap(const FragTrap& src)
{
	*this = src;
	std::cout << "\tFragTrap Copy Constructor called" << std::endl;
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
	std::cout << "\tFragTrap Copy Assigment Constructor called" << std::endl;
	return *this;
}

// FUNCTIONS

void	FragTrap::attack(const std::string& target)
{
	if (this->_energy && this->_health)
	{
		this->_energy--;
		std::cout
			<< "FragTrap "
			<< this->_name
			<< " attacks " << target
			<< ", causing " << this->_attack
			<< " points of damage!"
		<< std::endl;
		return;
	}
	std::cout
		<< "FragTrap "
		<< this->_name
		<< " has not enough power to attack." << std::endl;
	return;
}

void	FragTrap::highFivesGuys()
{
	std::cout
		<< "HI FIVE! from: "
		<< this->_name
	<< std::endl;
	return;
}
