/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crios <crios@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 16:11:38 by crios             #+#    #+#             */
/*   Updated: 2025/04/29 17:35:26 by crios            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{  
    _hitPoints = 100;    
    _energyPoints = 50;
    _attackDamage = 20;
    std::cout << "ScavTrap default constructor called\n";
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{  
    _hitPoints = 100;
    _energyPoints = 50;
    _attackDamage = 20;
    std::cout << "ScavTrap default constructor called\n";
}

ScavTrap::~ScavTrap()
{
	std::cout << "Default destructor called" << std::endl;
}

void ScavTrap::guardGate()
{
    std::cout << "🛡️  " << this->getName() << " is now in Gate Keeper mode!\n" << std::endl;
}
