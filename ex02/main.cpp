/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpinilla <gpinilla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 22:16:33 by gpinilla          #+#    #+#             */
/*   Updated: 2024/10/22 20:24:54 by gpinilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main() {
    FragTrap frag1("Fraggy");
    frag1.attack("Target");
    frag1.takeDamage(30);
    frag1.beRepaired(20);
    frag1.highFivesGuys();

    // Probar el constructor de copia y el operador de asignación
    FragTrap frag2 = frag1;  // Constructor de copia
    frag2.highFivesGuys();

    FragTrap frag3;
    frag3 = frag1;  // Operador de asignación
    frag3.highFivesGuys();

    return 0;
}


