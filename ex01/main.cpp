/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpinilla <gpinilla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 22:16:33 by gpinilla          #+#    #+#             */
/*   Updated: 2024/10/22 20:00:25 by gpinilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main() {
    ScavTrap scav1("Scavvy");
    scav1.attack("Target");
    scav1.takeDamage(30);
    scav1.beRepaired(20);
    scav1.guardGate();

    // Probar el constructor de copia y operador de asignación
    ScavTrap scav2 = scav1;
    scav2.guardGate();

    ScavTrap scav3;
    scav3 = scav1;
    scav3.guardGate();

    return 0;
}

