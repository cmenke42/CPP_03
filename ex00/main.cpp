/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmenke <cmenke@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 21:01:26 by cmenke            #+#    #+#             */
/*   Updated: 2023/10/17 20:20:36 by cmenke           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap	one("Clappi_1");
	ClapTrap	two("Clappi_2");

	std::cout << std::endl;
	for (int i; i <= 11; i++)
	{
		one.attack("Clappi_2");
		two.takeDamage(0);
	}
	std::cout << std::endl;
	two.attack("Clappi_1");
	one.takeDamage(0);
	std::cout << std::endl;
	one.beRepaired(10);
	two.beRepaired(2);
	std::cout << std::endl;
	return (0);
}
