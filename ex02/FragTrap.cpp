/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmenke <cmenke@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 18:53:20 by cmenke            #+#    #+#             */
/*   Updated: 2023/10/25 15:17:20 by cmenke           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void) : ClapTrap()
{
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
	this->_maxHitPoints = this->_hitPoints;
	std::cout << FRAG_TRAP_TYPE << " has been created! - Default" << std::endl;
}

FragTrap::FragTrap(const std::string name) : ClapTrap(name)
{
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
	this->_maxHitPoints = this->_hitPoints;
	std::cout << FRAG_TRAP_TYPE << name << " has been created! - Name Constructor" << std::endl;
}

FragTrap::FragTrap(const FragTrap& src) : ClapTrap(src)
{
	*this = src;
	std::cout << FRAG_TRAP_TYPE << this->_name << " has been created! - Copy Constructor" << std::endl;
}

FragTrap::~FragTrap(void)
{
	std::cout << FRAG_TRAP_TYPE << this->_name << " has been destroyed!" << std::endl;
}

FragTrap&	FragTrap::operator=(const FragTrap& rhs)
{
	std::cout << FRAG_TRAP_TYPE << this->_name << " assignemnt operator called" << std::endl;
	if(this == &rhs)
		return (*this);
	this->_name = rhs._name;
	this->_hitPoints = rhs._hitPoints;
	this->_energyPoints = rhs._energyPoints;
	this->_attackDamage = rhs._attackDamage;
	this->_maxHitPoints = rhs._maxHitPoints;
	return (*this);
}

void	FragTrap::attack(const std::string& target)
{
	if (!this->isAlive(FRAG_TRAP_TYPE) || !this->hasEnergy(FRAG_TRAP_TYPE))
	{
		std::cout << " Can't attack." << std::endl;
		return ;
	}
	std::cout << FRAG_TRAP_TYPE << this->_name << " attacks " << target;
	std::cout << " causing " << this->_attackDamage << " points of damage!" << std::endl;
	this->_energyPoints--;
}

void	FragTrap::highFivesGuys()
{
	if (!this->isAlive(FRAG_TRAP_TYPE) || !this->hasEnergy(FRAG_TRAP_TYPE))
	{
		std::cout << " Can't high five." << std::endl;
		return ;
	}
	std::cout << FRAG_TRAP_TYPE << this->_name << " high five guys." << std::endl;
	this->_energyPoints--;
}
