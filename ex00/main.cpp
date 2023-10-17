/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmenke <cmenke@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 21:01:26 by cmenke            #+#    #+#             */
/*   Updated: 2023/10/17 14:17:31 by cmenke           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap	one("Robot");
	ClapTrap	two("Toaster");

	one.attack("Toaster");
	two.takeDamage(0);
	one.attack("Toaster");
	two.takeDamage(0);
	one.attack("Toaster");
	two.takeDamage(0);
	one.attack("Toaster");
	two.takeDamage(0);
	one.attack("Toaster");
	two.takeDamage(0);
	one.attack("Toaster");
	two.takeDamage(0);
	one.attack("Toaster");
	two.takeDamage(0);
	one.attack("Toaster");
	two.takeDamage(0);
	one.attack("Toaster");
	two.takeDamage(0);
	one.attack("Toaster");
	two.takeDamage(0);

	one.attack("Toaster");
	two.attack("Robot");
	one.takeDamage(0);
	one.beRepaired(10);
	two.beRepaired(2);
	return (0);
}
