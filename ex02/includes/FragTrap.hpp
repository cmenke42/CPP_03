/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmenke <cmenke@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 18:52:42 by cmenke            #+#    #+#             */
/*   Updated: 2023/10/24 22:03:48 by cmenke           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAG_TRAP_HPP
# define FRAG_TRAP_HPP

#include "ClapTrap.hpp"

#define FRAG_TRAP_TYPE "FragTrap "

class FragTrap : public ClapTrap
{
	public:
		FragTrap(void);
		FragTrap(const std::string name);
		FragTrap(const FragTrap& src);
		~FragTrap(void);

		FragTrap& operator=(const FragTrap& copy);

		void attack(const std::string& target);
		void highFivesGuys(void);
};

#endif /* FRAG_TRAP_HPP */
