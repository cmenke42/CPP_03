/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmenke <cmenke@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 10:09:14 by cmenke            #+#    #+#             */
/*   Updated: 2023/10/18 10:27:28 by cmenke           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMOND_TRAP_HPP
# define DIAMOND_TRAP_HPP

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

#define DIAMOND_TRAP_TYPE "DiamondTrap "

class DiamondTrap : public ScavTrap, public FragTrap
{
	public:
		DiamondTrap(void);
		DiamondTrap(const std::string name);
		DiamondTrap(const DiamondTrap& src);
		virtual ~DiamondTrap(void);

		DiamondTrap& operator=(const DiamondTrap& copy);
		
		void attack(const std::string& target);
		// This member function will display both its name and its ClapTrap name.
		void whoAmI(void);
	private:
		std::string		_name;
		
};


#endif /* DIAMOND_TRAP_HPP */