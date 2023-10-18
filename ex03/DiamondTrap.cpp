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

DiamondTrap::DiamondTrap(void) : ClapTrap(), ScavTrap(), FragTrap()
{
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 30;
	this->_maxHitPoints = this->_hitPoints;
	std::cout << DIAMOND_TRAP_TYPE << " has been created! - Default" << std::endl;
}

DiamondTrap::DiamondTrap(const std::string name) : ClapTrap(name + "_clap_name"), ScavTrap(name), FragTrap(name)
{
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 30;
	this->_maxHitPoints = this->_hitPoints;
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
	ClapTrap::_name = rhs.ClapTrap::_name;
	this->_hitPoints = rhs._hitPoints;
	this->_energyPoints = rhs._energyPoints;
	this->_attackDamage = rhs._attackDamage;
	this->_maxHitPoints = this->_maxHitPoints;
	DiamondTrap::_name = rhs.DiamondTrap::_name;
	return (*this);
}

void	DiamondTrap::attack(const std::string& target)
{
	ScavTrap::attack(target);
}

void	DiamondTrap::whoAmI(void)
{
	std::cout << DIAMOND_TRAP_TYPE << this->DiamondTrap::_name << " and my ClapTrap name is " << this->ClapTrap::_name << std::endl;
}
