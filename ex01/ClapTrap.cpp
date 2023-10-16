/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmenke <cmenke@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 21:27:58 by cmenke            #+#    #+#             */
/*   Updated: 2023/10/16 15:49:19 by cmenke           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void)
		: _name("ClapTrap"), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "ClapTrap " << " has been created! - Default" << std::endl;
}

ClapTrap::ClapTrap(std::string name)
		: _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "ClapTrap " << this->_name << " has been created! - Name Constructor" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& src)
{
	*this = src;
	std::cout << "ClapTrap " << this->_name << " has been created! - Copy Constructor" << std::endl;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "ClapTrap " << this->_name << " has been destroyed!" << std::endl;
}

ClapTrap&	ClapTrap::operator=(const ClapTrap& rhs)
{
	if(this == &rhs)
		return (*this);
	this->_name = rhs.getName();
	this->_hitPoints = rhs.getHitPoints();
	this->_energyPoints = rhs.getEnergyPoints();
	this->_attackDamage = rhs.getAttackDamage();
	return (*this);
}

void	ClapTrap::attack(const std::string& target)
{
	if (this->getEnergyPoints() < 1)
	{
		std::cout << "ClapTrap " << this->getName() << " is out of energy! Can't attack." << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << this->getName() << " attacks " << target;
	std::cout << " causing " << this->getAttackDamage() << " points of damage!" << std::endl;
	this->_energyPoints--;

}

void	ClapTrap::takeDamage(unsigned int ammount)
{
	if (this->getHitPoints() < 1)
	{
		std::cout << "ClapTrap " << this->getName() << " is already dead!" << std::endl;
		return ;
	}
	else if (this->getHitPoints() < ammount)
		this->_hitPoints = 0;
	else
		this->_hitPoints -= ammount;
	std::cout << "ClapTrap " << this->getName() << " takes ";
	std::cout << ammount << " points of damage!" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int ammount)
{
	if (this->getEnergyPoints() < 1)
	{
		std::cout << "ClapTrap " << this->getName() << " is out of energy! Can't be repaired." << std::endl;
		return ;
	}
	if (this->getHitPoints() < 1)
	{
		std::cout << "ClapTrap " << this->getName() << " is already dead! Can't be repaired." << std::endl;
		return ;
	}
	else if (static_cast<long>(this->getHitPoints()) + ammount > std::numeric_limits<unsigned int>::max())
		this->_hitPoints = std::numeric_limits<unsigned int>::max();
	else
		this->_hitPoints += ammount;
	std::cout << "ClapTrap " << this->getName() << " is repaired for ";
	std::cout << ammount << " points! ";
	std::cout << "Now has " << this->getHitPoints() << " hit points" << std::endl;
	this->_energyPoints -= 1;
}

std::string	ClapTrap::getName(void) const
{
	return (this->_name);
}

unsigned int	ClapTrap::getHitPoints(void) const
{
	return (this->_hitPoints);
}

unsigned int	ClapTrap::getEnergyPoints(void) const
{
	return (this->_energyPoints);
}

unsigned int	ClapTrap::getAttackDamage(void) const
{
	return (this->_attackDamage);
}
