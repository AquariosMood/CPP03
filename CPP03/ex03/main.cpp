/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crios <crios@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 20:21:13 by crios             #+#    #+#             */
/*   Updated: 2025/04/29 17:34:36 by crios            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int	main(void)
{
	std::cout << "======================" << std::endl;
	std::cout << "DiamondTrap: Fighter 1: \n" << std::endl;
	DiamondTrap Max("Max Holloway");
	Max.attack("Justin Gaethje");
	Max.beRepaired(8);
	Max.highFivesGuys();
	Max.guardGate();
	Max.whoAmI();
	std::cout << "\n======================" << std::endl;
	
	return (0);
}
