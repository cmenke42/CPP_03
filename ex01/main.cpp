/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmenke <cmenke@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 21:01:26 by cmenke            #+#    #+#             */
/*   Updated: 2023/10/17 20:38:39 by cmenke           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main(void)
{
	ClapTrap	one("Clappi");
	ScavTrap	two("Scavvi_1");
	ScavTrap	three("Scavvi_2");

	std::cout << std::endl;
	for (int i; i <= 51; i++)
	{
		three.attack("Clappi");
		if (i <= 50)
			one.takeDamage(three.getAttackDamage());
	}
	std::cout << std::endl;
	three.guardGate();
	std::cout << std::endl;
	two.attack("Scavvi_1");
	two.takeDamage(two.getAttackDamage());
	two.beRepaired(100000);
	std::cout << std::endl;
	return (0);
}
