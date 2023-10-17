/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmenke <cmenke@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 18:52:42 by cmenke            #+#    #+#             */
/*   Updated: 2023/10/17 19:28:55 by cmenke           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

#define SCAV_TRAP_TYPE "ScavTrap "

class ScavTrap : public ClapTrap
{
	public:
		ScavTrap(void);
		ScavTrap(const std::string name);
		ScavTrap(const ScavTrap& src);
		~ScavTrap(void);

		ScavTrap& operator=(const ScavTrap& copy);

		void attack(const std::string& target);
		void guardGate();
	
};

// ScavTrap will use the attributes of ClapTrap (update ClapTrap in consequence) and
// must initialize them to:
// • Name, which is passed as parameter to a constructor
// • Hit points (100), represent the health of the ClapTrap
// • Energy points (50)
// • Attack damage (20)
// ScavTrap will also have its own special capacity:
// void guardGate();
// This member function will display a message informing that ScavTrap is now in Gate
// keeper mode.
// Don’t forget to add more tests to your program
