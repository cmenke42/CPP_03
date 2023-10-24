/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmenke <cmenke@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 21:01:26 by cmenke            #+#    #+#             */
/*   Updated: 2023/10/24 21:11:18 by cmenke           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
	std::cout << "----" << "Constructing" << "----" << std::endl;
	ClapTrap	Clappi_1("Clappi_1");
	ClapTrap	Clappi_2("Clappi_2");
	ClapTrap	Clappi_3("Clappi_3");

	std::cout << "\n----" << "Clappi_1 attacks Clappi_2: 12 times" << "----" << std::endl;
	for (int i = 0; i <= 11; i++)
	{
		Clappi_1.attack("Clappi_2");
		if (i < 10)
			Clappi_2.takeDamage(Clappi_1.getAttackDamage());
	}

	std::cout << "\n----" << "Clappi_2 attacks Clappi_1: 1 time" << "----" << std::endl;
	Clappi_2.attack("Clappi_1");
	Clappi_1.takeDamage(Clappi_2.getAttackDamage());

	std::cout << "\n----" << "Clappi_1 and Clappi_2 getting repaired" << "----" << std::endl;
	Clappi_1.beRepaired(10);
	Clappi_2.beRepaired(2);
	Clappi_2.takeDamage(9);
	Clappi_2.beRepaired(4);
	Clappi_2.takeDamage(10);
	Clappi_2.beRepaired(4);

	std::cout << "\n----" << "Testing max values" << "----" << std::endl;
	Clappi_3.beRepaired(std::numeric_limits<unsigned int>::max());
	Clappi_3.takeDamage(std::numeric_limits<unsigned int>::max());
	Clappi_3.beRepaired(std::numeric_limits<unsigned int>::max());

	std::cout << "\n----" << "Destroying" << "----" << std::endl;
	return (0);
}
