/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocviller <ocviller@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/10 20:23:36 by ocviller          #+#    #+#             */
/*   Updated: 2026/01/10 20:44:58 by ocviller         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
    std::cout << "===== CONSTRUCTION =====" << std::endl;
    ClapTrap a("Nova");

    std::cout << "\n===== ATTACK =====" << std::endl;
    a.attack("Enemy");
    a.attack("Enemy");

    std::cout << "\n===== TAKE DAMAGE =====" << std::endl;
    a.takeDamage(3);
    a.takeDamage(20);

    std::cout << "\n===== REPAIR =====" << std::endl;
    a.beRepaired(5);

    std::cout << "\n===== ENERGY DRAIN =====" << std::endl;
    ClapTrap b("Tired");
    for (int i = 0; i < 11; i++)
        b.attack("air");
    std::cout << "\n===== DEAD CLAPTRAP =====" << std::endl;
    ClapTrap c("Dead");
    c.takeDamage(10);
    c.attack("anyone");
    c.beRepaired(5);

    std::cout << "\n===== DESTRUCTORS =====" << std::endl;
    return 0;
}
