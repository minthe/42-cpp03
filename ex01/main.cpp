/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfuhlenb <vfuhlenb@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 16:48:12 by vfuhlenb          #+#    #+#             */
/*   Updated: 2023/03/12 16:58:21 by vfuhlenb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.class.hpp"
#include "ScavTrap.class.hpp"

int	main()
{
	ScavTrap	Foo;
	ScavTrap	Boo("Boo");
	ClapTrap	Coo;

	Boo.attack("Foo");
	Coo.attack("Boo");
	Foo.guardGate();

	return 0;
}
