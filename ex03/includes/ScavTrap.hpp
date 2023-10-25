/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmenke <cmenke@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 18:52:42 by cmenke            #+#    #+#             */
/*   Updated: 2023/10/25 15:07:25 by cmenke           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAV_TRAP_HPP
# define SCAV_TRAP_HPP

#include "ClapTrap.hpp"

#define SCAV_TRAP_TYPE "ScavTrap "

class ScavTrap : virtual public ClapTrap
{
	public:
		ScavTrap(void);
		ScavTrap(const std::string name);
		ScavTrap(const ScavTrap& src);
		virtual ~ScavTrap(void);

		ScavTrap& operator=(const ScavTrap& copy);

		virtual void attack(const std::string& target);
		void guardGate();
};

#endif /* SCAV_TRAP_HPP */
