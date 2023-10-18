/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmenke <cmenke@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 21:01:26 by cmenke            #+#    #+#             */
/*   Updated: 2023/10/18 14:36:01 by cmenke           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main(void)
{
	DiamondTrap	one("Dia_1");

	std::cout << std::endl;
	one.attack("Dia_1");
	one.takeDamage(one.getAttackDamage());
	std::cout << std::endl;
	one.guardGate();
	std::cout << std::endl;
	one.highFivesGuys();
	std::cout << std::endl;
	one.beRepaired(100000);
	std::cout << std::endl;
	one.whoAmI();
	std::cout << std::endl;
	return (0);
}
