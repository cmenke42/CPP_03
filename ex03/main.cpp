/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmenke <cmenke@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 21:01:26 by cmenke            #+#    #+#             */
/*   Updated: 2023/10/25 15:32:56 by cmenke           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main(void)
{
	std::cout << "----" << "Constructing" << "----" << std::endl;
	ClapTrap	Clappi_1("Clappi_1");
	ClapTrap	Clappi_2("Clappi_2");
	DiamondTrap	Dia_1("Dia_1");
	DiamondTrap	Dia_2("Dia_2");
	DiamondTrap	Dia_3("Dia_3");

	std::cout << "\n----" << "Dia_2 attacks Clappi_1: 101 times" << "----" << std::endl;
	for (int i = 0; i <= 51; i++)
	{
		Dia_2.attack("Clappi_1");
		if (i < 50)
			Clappi_1.takeDamage(Dia_2.getAttackDamage());
		if (i == 0 || i == 49)
			std::cout << std::endl;
	}

	std::cout << "\n----" << "Dia_1 attacks Dia_2: 1 time" << "----" << std::endl;
	Dia_1.attack("Dia_2");
	Dia_2.takeDamage(Dia_1.getAttackDamage());

	std::cout << "\n----" << "Dia_1 and Dia_2 getting repaired" << "----" << std::endl;
	Dia_2.beRepaired(2);
	Dia_1.takeDamage(40);
	Dia_1.beRepaired(10);

	std::cout << "\n----" << "Testing max values" << "----" << std::endl;
	Dia_1.beRepaired(std::numeric_limits<unsigned int>::max());
	Dia_1.takeDamage(std::numeric_limits<unsigned int>::max());
	Dia_1.beRepaired(std::numeric_limits<unsigned int>::max());

	std::cout << "\n----" << "Dia_* specials" << "----" << std::endl;
	Dia_1.whoAmI();
	Dia_2.whoAmI();
	Dia_3.whoAmI();
	std::cout << std::endl;
	Dia_1.highFivesGuys();
	Dia_2.highFivesGuys();
	Dia_3.highFivesGuys();
	std::cout << std::endl;
	Dia_1.guardGate();
	Dia_2.guardGate();
	Dia_3.guardGate();

	std::cout << "\n----" << "Tests for virtual functions" << "----" << std::endl;
	std::cout << "-Clappi_ptr = new DiamondTrap(\"newDia\");-" << std::endl;
	ClapTrap	*Clappi_ptr = NULL;
	try
	{
		Clappi_ptr = new DiamondTrap("newDia");
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	if (Clappi_ptr)
	{
		Clappi_ptr->attack("Dia_3");
		Dia_3.takeDamage(Clappi_ptr->getAttackDamage());
	}

	std::cout << "\n----" << "Destroying" << "----" << std::endl;
	delete Clappi_ptr;

	return (0);
}
