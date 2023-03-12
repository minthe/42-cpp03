/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfuhlenb <vfuhlenb@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 12:53:29 by vfuhlenb          #+#    #+#             */
/*   Updated: 2023/03/12 14:45:36 by vfuhlenb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.class.hpp"

int	main()
{
	ClapTrap Foo;
	ClapTrap Boo ("Boo");
	Foo = Boo;
	
	Foo.attack("Boo");
	Boo.takeDamage(10);
	Foo.beRepaired(4);
	ClapTrap fe;
	Boo.attack("Foo");
	return 0;
}
