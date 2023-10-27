/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmenke <cmenke@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 18:53:20 by cmenke            #+#    #+#             */
/*   Updated: 2023/10/27 18:28:50 by cmenke           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) : ClapTrap()
{
	this->_hitPoints = 100;
	this->_maxHitPoints = this->_hitPoints;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
	std::cout << SCAV_TRAP_TYPE << " has been created! - Default" << std::endl;
}

ScavTrap::ScavTrap(const std::string name) : ClapTrap(name)
{
	this->_hitPoints = 100;
	this->_maxHitPoints = this->_hitPoints;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
	std::cout << SCAV_TRAP_TYPE << name << " has been created! - Name Constructor" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& src) : ClapTrap(src)
{
	*this = src;
	std::cout << SCAV_TRAP_TYPE << this->_name << " has been created! - Copy Constructor" << std::endl;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << SCAV_TRAP_TYPE << this->_name << " has been destroyed!" << std::endl;
}

ScavTrap&	ScavTrap::operator=(const ScavTrap& rhs)
{
	std::cout << SCAV_TRAP_TYPE << this->_name << " assignemnt operator called" << std::endl;
	if(this == &rhs)
		return (*this);
	this->_name = rhs._name;
	this->_hitPoints = rhs._hitPoints;
	this->_maxHitPoints = rhs._maxHitPoints;
	this->_energyPoints = rhs._energyPoints;
	this->_attackDamage = rhs._attackDamage;
	return (*this);
}

void	ScavTrap::attack(const std::string& target)
{
	if (!this->isAlive(SCAV_TRAP_TYPE) || !this->hasEnergy(SCAV_TRAP_TYPE))
	{
		std::cout << " Can't attack." << std::endl;
		return ;
	}
	std::cout << SCAV_TRAP_TYPE << this->_name << " attacks " << target;
	std::cout << " causing " << this->_attackDamage << " points of damage!" << std::endl;
	this->_energyPoints--;
}

void	ScavTrap::guardGate()
{
	if (!this->isAlive(SCAV_TRAP_TYPE) || !this->hasEnergy(SCAV_TRAP_TYPE))
	{
		std::cout << " Can't guard the gate." << std::endl;
		return ;
	}
	std::cout << SCAV_TRAP_TYPE << this->_name << " is now in Gate keeper mode." << std::endl;
	this->_energyPoints--;
}
