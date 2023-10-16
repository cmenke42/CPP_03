/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmenke <cmenke@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 21:01:26 by cmenke            #+#    #+#             */
/*   Updated: 2023/10/16 15:51:42 by cmenke           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap	one("Robot");
	ClapTrap	two("Toaster");

	while (one.getEnergyPoints() > 0)
	{
		one.attack(two.getName());
		two.takeDamage(0);
	}
	one.attack(two.getName());
	two.attack(one.getName());
	one.takeDamage(0);
	one.beRepaired(10);
	two.beRepaired(2);
	return (0);
}
