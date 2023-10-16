/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmenke <cmenke@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 18:53:20 by cmenke            #+#    #+#             */
/*   Updated: 2023/10/16 19:26:11 by cmenke           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) : ClapTrap(void)
{
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
	std::cout << this->getRobotType() << " has been created! - Default" << std::endl;
}

ScavTrap::ScavTrap(std::string name)
		: _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0), _robotType("ScavTrap ")
{
	std::cout << this->getRobotType() << this->_name << " has been created! - Name Constructor" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& src)
{
	*this = src;
	std::cout << this->getRobotType() << this->_name << " has been created! - Copy Constructor" << std::endl;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << this->getRobotType() << this->_name << " has been destroyed!" << std::endl;
}

void	ScavTrap::guardGate()
{
	std::cout << this->getRobotType() << this->getName() << " is now in Gate keeper mode." << std::endl;
}
