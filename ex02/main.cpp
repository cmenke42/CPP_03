/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmenke <cmenke@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 21:01:26 by cmenke            #+#    #+#             */
/*   Updated: 2023/10/24 22:05:58 by cmenke           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main(void)
{
	std::cout << "----" << "Constructing" << "----" << std::endl;
	ClapTrap	Clappi_1("Clappi_1");
	ClapTrap	Clappi_2("Clappi_2");
	FragTrap	Fraggi_1("Fraggi_1");
	FragTrap	Fraggi_2("Fraggi_2");
	FragTrap	Fraggi_3("Fraggi_3");

	std::cout << "\n----" << "Fraggi_1 attacks Clappi_1: 101 times" << "----" << std::endl;
	for (int i = 0; i <= 101; i++)
	{
		Fraggi_2.attack("Clappi_1");
		if (i < 100)
			Clappi_1.takeDamage(Fraggi_2.getAttackDamage());
		if (i == 0 || i == 99)
			std::cout << std::endl;
	}

	std::cout << "\n----" << "Fraggi_1 attacks Fraggi_2: 1 time" << "----" << std::endl;
	Fraggi_1.attack("Fraggi_2");
	Fraggi_2.takeDamage(Fraggi_1.getAttackDamage());

	std::cout << "\n----" << "Fraggi_1 and Fraggi_2 getting repaired" << "----" << std::endl;
	Fraggi_2.beRepaired(2);
	Fraggi_1.takeDamage(40);
	Fraggi_1.beRepaired(10);

	std::cout << "\n----" << "Testing max values" << "----" << std::endl;
	Fraggi_1.beRepaired(std::numeric_limits<unsigned int>::max());
	Fraggi_1.takeDamage(std::numeric_limits<unsigned int>::max());
	Fraggi_1.beRepaired(std::numeric_limits<unsigned int>::max());
	Clappi_2.beRepaired(std::numeric_limits<unsigned int>::max());
	Clappi_2.takeDamage(std::numeric_limits<unsigned int>::max());
	Clappi_2.beRepaired(std::numeric_limits<unsigned int>::max());

	std::cout << "\n----" << "Fraggi_* high fives" << "----" << std::endl;
	Fraggi_1.highFivesGuys();
	Fraggi_2.highFivesGuys();
	Fraggi_3.highFivesGuys();
	Fraggi_3.highFivesGuys();

	std::cout << "\n----" << "Tests for virtual functions" << "----" << std::endl;
	std::cout << "-Clappi_ptr = new ScavTrap(\"newFraggi\");-" << std::endl;
	ClapTrap	*Clappi_ptr = NULL;
	try
	{
		Clappi_ptr = new FragTrap("newFraggi");
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	if (Clappi_ptr)
	{
		Clappi_ptr->attack("Fraggi_3");
		Fraggi_3.takeDamage(Clappi_ptr->getAttackDamage());
	}

	std::cout << "\n----" << "Destroying" << "----" << std::endl;
	delete Clappi_ptr;

	return (0);
}
