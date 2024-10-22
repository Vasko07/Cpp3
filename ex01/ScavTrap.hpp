/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpinilla <gpinilla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 19:23:31 by gpinilla          #+#    #+#             */
/*   Updated: 2024/10/22 20:01:41 by gpinilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HPP_SCAVTRAP
#define	HPP_SCAVTRAP

#include "ClapTrap.hpp"

class  ScavTrap : public ClapTrap {

public:
	 ScavTrap();
	 ScavTrap(const std::string &name);
	 ScavTrap(const ScavTrap &other);
	 ScavTrap& operator=(const ScavTrap &other);
	~ ScavTrap();

	void attack(const std::string &target);
	void guardGate();
};

#endif