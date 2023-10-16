/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmenke <cmenke@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 21:01:26 by cmenke            #+#    #+#             */
/*   Updated: 2023/10/16 15:30:50 by cmenke           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap	one("1");
	ClapTrap	two("2");

	while (one.getEnergyPoints() > 0)
	{
		one.attack("2");
		two.takeDamage(0);
	}
	one.attack("2");
	two.attack("1");
	one.takeDamage(0);
	one.beRepaired(10);
	two.beRepaired(2);
	return (0);
}
