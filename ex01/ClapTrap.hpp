/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmenke <cmenke@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 21:01:34 by cmenke            #+#    #+#             */
/*   Updated: 2023/10/17 19:38:44 by cmenke           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>
#include <string>
#include <limits>

#define CLAP_TRAP_TYPE "ClapTrap "
class ClapTrap
{
	public:
		ClapTrap(void);
		ClapTrap(std::string name);
		ClapTrap(const ClapTrap& src);
		virtual ~ClapTrap(void);

		ClapTrap& operator=(const ClapTrap& copy);

		virtual void	attack(const std::string& target);
		void			takeDamage(unsigned int amount);
		void			beRepaired(unsigned int amount);
		unsigned int	getAttackDamage(void) const;

	protected:
		std::string		_name;
		unsigned int	_hitPoints;
		unsigned int	_energyPoints;
		unsigned int	_attackDamage;
		unsigned int	_maxHitPoints;

		bool			isAlive(void) const;
		bool			hasEnergy(void) const;

};

#endif //CLAPTRAP_HPP
