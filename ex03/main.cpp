/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfuhlenb <vfuhlenb@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 16:48:12 by vfuhlenb          #+#    #+#             */
/*   Updated: 2023/03/13 12:36:43 by vfuhlenb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "DiamondTrap.class.hpp"

int	main()
{
	DiamondTrap	Diamond("Di");
	DiamondTrap Diamond2;
	ClapTrap Clap;

	Clap.attack("Di");
	Diamond.whoAmI();
	Diamond2.whoAmI();
	std::cout
		<< Diamond.getName()
		<< " [DiamondTrap] Health: " << Diamond.getHealth()
		<< " Energy: " << Diamond.getEnergy()
		<< " Attack: " << Diamond.getAttack()
	<< std::endl;
	Diamond.attack("Di");
	
	Diamond.takeDamage(20);
	std::cout
		<< Diamond.getName()
		<< "[DiamondTrap] Health: " << Diamond.getHealth()
		<< " Energy: " << Diamond.getEnergy()
		<< " Attack: " << Diamond.getAttack()
	<< std::endl;
	std::cout
		<< Clap.getName()
		<< "[ClapTrap] Health: " << Clap.getHealth()
		<< " Energy: " << Clap.getEnergy()
		<< " Attack: " << Clap.getAttack()
	<< std::endl;
	Diamond.ScavTrap::attack("Boo");
	Diamond.highFivesGuys();
	Diamond.guardGate();
	return 0;
}
