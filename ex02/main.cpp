/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfuhlenb <vfuhlenb@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 16:48:12 by vfuhlenb          #+#    #+#             */
/*   Updated: 2023/03/12 17:32:25 by vfuhlenb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.class.hpp"
#include "ScavTrap.class.hpp"
#include "FragTrap.class.hpp"

int	main()
{
	ScavTrap	Foo;
	ScavTrap	Boo("Boo");
	FragTrap	Frag;
	FragTrap	Frag2;

	Boo.attack("Frag2");
	Frag2.takeDamage(100);
	Frag = Frag2;
	Frag.attack("Boo");
	Foo.guardGate();
	Frag.highFivesGuys();

	return 0;
}
