/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmenke <cmenke@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 21:27:58 by cmenke            #+#    #+#             */
/*   Updated: 2023/10/26 17:17:13 by cmenke           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void)
		: _name("ClapTrap"), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	this->_maxHitPoints = this->_hitPoints;
	std::cout << CLAP_TRAP_TYPE << "has been created! - Default" << std::endl;
}

ClapTrap::ClapTrap(const std::string name)
		: _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	this->_maxHitPoints = this->_hitPoints;
	std::cout << CLAP_TRAP_TYPE << this->_name << " has been created! - Name Constructor" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& src)
{
	*this = src;
	std::cout << CLAP_TRAP_TYPE << this->_name << " has been created! - Copy Constructor" << std::endl;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << CLAP_TRAP_TYPE << this->_name << " has been destroyed!" << std::endl;
}

ClapTrap&	ClapTrap::operator=(const ClapTrap& rhs)
{
	std::cout << CLAP_TRAP_TYPE << this->_name << " assignemnt operator called!" << std::endl;
	if(this == &rhs)
		return (*this);
	this->_name = rhs._name;
	this->_hitPoints = rhs._hitPoints;
	this->_maxHitPoints = rhs._maxHitPoints;
	this->_energyPoints = rhs._energyPoints;
	this->_attackDamage = rhs._attackDamage;
	return (*this);
}

void	ClapTrap::attack(const std::string& target)
{
	if (!this->isAlive(CLAP_TRAP_TYPE) || !this->hasEnergy(CLAP_TRAP_TYPE))
	{
		std::cout << " Can't attack." << std::endl;
		return ;
	}
	std::cout << CLAP_TRAP_TYPE << this->_name << " attacks " << target;
	std::cout << " causing " << this->_attackDamage << " points of damage!" << std::endl;
	this->_energyPoints--;
}

void	ClapTrap::takeDamage(unsigned int ammount)
{
	if (!this->isAlive(CLAP_TRAP_TYPE))
	{
		std::cout << " Can't take any more damage." << std::endl;
		return ;
	}
	if (this->_hitPoints <= ammount)
		this->_hitPoints = 0;
	else
		this->_hitPoints -= ammount;
	std::cout << CLAP_TRAP_TYPE << this->_name << " takes ";
	std::cout << ammount << " points of damage! Now has " << this->_hitPoints << " hit Points." << std::endl;
}

void	ClapTrap::beRepaired(unsigned int ammount)
{
	if (!this->isAlive(CLAP_TRAP_TYPE) || !this->hasEnergy(CLAP_TRAP_TYPE))
	{
		std::cout << " Can't be repaired." << std::endl;
		return ;
	}
	if (this->_maxHitPoints - this->_hitPoints <= ammount)
		this->_hitPoints = this->_maxHitPoints;
	else
		this->_hitPoints += ammount;
	std::cout << CLAP_TRAP_TYPE << this->_name << " heals " << ammount << " points! ";
	std::cout << "Now has " << this->_hitPoints << " hit points" << std::endl;
	this->_energyPoints--;
}

bool ClapTrap::isAlive(const std::string robotType) const
{
	if (this->_hitPoints > 0)
		return (true);
	std::cout << robotType << this->_name << " is already dead!";
	return (false);
}

bool ClapTrap::hasEnergy(const std::string robotType) const
{
	if (this->_energyPoints > 0)
		return (true);
	std::cout << robotType << this->_name << " is out of energy!";
	return (false);
}

unsigned int ClapTrap::getAttackDamage() const
{
	return (this->_attackDamage);
}
