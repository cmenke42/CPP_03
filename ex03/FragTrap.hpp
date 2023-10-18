/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmenke <cmenke@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 18:52:42 by cmenke            #+#    #+#             */
/*   Updated: 2023/10/18 10:12:06 by cmenke           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAG_TRAP_HPP
# define FRAG_TRAP_HPP

#include "ClapTrap.hpp"

#define FRAG_TRAP_TYPE "FragTrap "

class FragTrap : virtual public ClapTrap
{
	public:
		FragTrap(void);
		FragTrap(const std::string name);
		FragTrap(const FragTrap& src);
		virtual ~FragTrap(void);

		FragTrap& operator=(const FragTrap& copy);

		void attack(const std::string& target);
		void highFivesGuys(void);
};

#endif //FRAG_TRAP_HPP