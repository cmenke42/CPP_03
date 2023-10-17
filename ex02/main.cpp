/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmenke <cmenke@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 21:01:26 by cmenke            #+#    #+#             */
/*   Updated: 2023/10/17 20:40:50 by cmenke           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main(void)
{
	FragTrap	one("Fraggi_1");
	FragTrap	two("Fraggi_2");
	FragTrap	three("Fraggi_3");

	std::cout << std::endl;
	for (int i; i <= 51; i++)
	{
		three.attack("Fraggi_1");
		if (i <= 50)
			one.takeDamage(three.getAttackDamage());
	}
	std::cout << std::endl;
	three.highFivesGuys();
	std::cout << std::endl;
	two.attack("Scavvi_1");
	two.takeDamage(two.getAttackDamage());
	two.beRepaired(100000);
	std::cout << std::endl;
	return (0);
}
