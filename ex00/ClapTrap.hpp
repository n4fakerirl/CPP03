/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocviller <ocviller@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/10 19:58:13 by ocviller          #+#    #+#             */
/*   Updated: 2026/01/10 20:09:34 by ocviller         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class ClapTrap
{
    private:
    std::string _name;
    int _hit_points;
    int _energy_points;
    int _attack_damage;
    
    public:
    ClapTrap(std::string name);
    ~ClapTrap();
    std::string getName(void);
    void setName(std::string name);
    void attack(const std::string& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
};