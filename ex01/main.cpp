/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmenke <cmenke@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 21:01:26 by cmenke            #+#    #+#             */
/*   Updated: 2023/10/24 21:39:33 by cmenke           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main(void)
{
	std::cout << "----" << "Constructing" << "----" << std::endl;
	ClapTrap	Clappi_1("Clappi_1");
	ClapTrap	Clappi_2("Clappi_2");
	ScavTrap	Scavvi_1("Scavvi_1");
	ScavTrap	Scavvi_2("Scavvi_2");
	ScavTrap	Scavvi_3("Scavvi_3");

	std::cout << "\n----" << "Scavvi_1 attacks Clappi_1: 50 times" << "----" << std::endl;
	for (int i = 0; i <= 51; i++)
	{
		Scavvi_2.attack("Clappi_1");
		if (i < 50)
			Clappi_1.takeDamage(Scavvi_2.getAttackDamage());
		if (i == 0 || i == 49)
			std::cout << std::endl;
	}

	std::cout << "\n----" << "Scavvi_1 attacks Scavvi_2: 1 time" << "----" << std::endl;
	Scavvi_1.attack("Scavvi_2");
	Scavvi_2.takeDamage(Scavvi_1.getAttackDamage());

	std::cout << "\n----" << "Scavvi_1 and Scavvi_2 getting repaired" << "----" << std::endl;
	Scavvi_1.beRepaired(10);
	Scavvi_2.beRepaired(2);
	Scavvi_1.takeDamage(40);
	Scavvi_1.beRepaired(10);

	std::cout << "\n----" << "Testing max values" << "----" << std::endl;
	Scavvi_1.beRepaired(std::numeric_limits<unsigned int>::max());
	Scavvi_1.takeDamage(std::numeric_limits<unsigned int>::max());
	Scavvi_1.beRepaired(std::numeric_limits<unsigned int>::max());
	Clappi_2.beRepaired(std::numeric_limits<unsigned int>::max());
	Clappi_2.takeDamage(std::numeric_limits<unsigned int>::max());
	Clappi_2.beRepaired(std::numeric_limits<unsigned int>::max());

	std::cout << "\n----" << "Scavvi_* guard gates" << "----" << std::endl;
	Scavvi_1.guardGate();
	Scavvi_2.guardGate();
	Scavvi_3.guardGate();
	Scavvi_3.guardGate();

	std::cout << "\n----" << "Tests for virtual functions" << "----" << std::endl;
	std::cout << "Clappi_ptr = new ScavTrap(\"newScavvi\");\n" << std::endl;
	ClapTrap	*Clappi_ptr = NULL;
	try
	{
		Clappi_ptr = new ScavTrap("newScavvi");
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	if (Clappi_ptr)
	{
		Clappi_ptr->attack("Scavvi_3");
		Scavvi_3.takeDamage(Clappi_ptr->getAttackDamage());
	}

	std::cout << "\n----" << "Destroying" << "----" << std::endl;
	delete Clappi_ptr;

	return (0);
}
