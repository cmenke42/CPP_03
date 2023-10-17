/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmenke <cmenke@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 21:01:26 by cmenke            #+#    #+#             */
/*   Updated: 2023/10/17 19:40:41 by cmenke           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main(void)
{
	ClapTrap	one("Robot");
	ClapTrap	two("Toaster");
	ScavTrap	three("Scav");

	three.attack("Robot");
	one.takeDamage(three.getAttackDamage());
	three.guardGate();
	three.beRepaired(100000);

	return (0);
}
