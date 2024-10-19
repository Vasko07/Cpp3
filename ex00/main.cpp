/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpinilla <gpinilla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 22:16:33 by gpinilla          #+#    #+#             */
/*   Updated: 2024/10/19 22:37:01 by gpinilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main() {
    ClapTrap clap1("Clappy");

    clap1.attack("Target1");
    clap1.takeDamage(5);
    clap1.beRepaired(3);

    ClapTrap clap2(clap1);
    clap2.attack("Target2");

    ClapTrap clap3;
    clap3 = clap1;
    clap3.takeDamage(8);

    return 0;
}
