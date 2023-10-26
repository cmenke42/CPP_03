/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmenke <cmenke@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 18:53:20 by cmenke            #+#    #+#             */
/*   Updated: 2023/10/17 19:54:11 by cmenke           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void) : ClapTrap("DiamondTrap_clap_name"), ScavTrap(), FragTrap()
{
	this->ClapTrap::_energyPoints = this->ScavTrap::_energyPoints;
	this->DiamondTrap::_name = "DiamondTrap";
	std::cout << DIAMOND_TRAP_TYPE << " has been created! - Default" << std::endl;
}

DiamondTrap::DiamondTrap(const std::string name) : ClapTrap(name + "_clap_name"), ScavTrap(name), FragTrap(name)
{
	this->ClapTrap::_energyPoints = this->ScavTrap::_energyPoints;
	this->DiamondTrap::_name = name;
	std::cout << DIAMOND_TRAP_TYPE << name << " has been created! - Name Constructor" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap& src) : ClapTrap(src), ScavTrap(src), FragTrap(src)
{
	*this = src;
	std::cout << DIAMOND_TRAP_TYPE << this->DiamondTrap::_name << " has been created! - Copy Constructor" << std::endl;
}

DiamondTrap::~DiamondTrap(void)
{
	std::cout << DIAMOND_TRAP_TYPE << this->DiamondTrap::_name << " has been destroyed!" << std::endl;
}

DiamondTrap&	DiamondTrap::operator=(const DiamondTrap& rhs)
{
	std::cout << DIAMOND_TRAP_TYPE << this->DiamondTrap::_name << " assignemnt operator called" << std::endl;
	if(this == &rhs)
		return (*this);
	this->ClapTrap::_name = rhs.ClapTrap::_name;
	this->DiamondTrap::_name = rhs.DiamondTrap::_name;
	this->_hitPoints = rhs._hitPoints;
	this->ClapTrap::_energyPoints = rhs.ClapTrap::_energyPoints;
	this->ScavTrap::_energyPoints = rhs.ScavTrap::_energyPoints;
	this->_attackDamage = rhs._attackDamage;
	this->_maxHitPoints = rhs._maxHitPoints;
	return (*this);
}

void	DiamondTrap::attack(const std::string& target)
{
	ScavTrap::attack(target);
}

void	DiamondTrap::whoAmI(void)
{
	if (!this->isAlive(DIAMOND_TRAP_TYPE) || !this->hasEnergy(DIAMOND_TRAP_TYPE))
	{
		std::cout << " Can't answer whoAmI..." << std::endl;
		return ;
	}
	std::cout << DIAMOND_TRAP_TYPE << this->DiamondTrap::_name << " has the ClapTrap name " << this->ClapTrap::_name << std::endl;
}
