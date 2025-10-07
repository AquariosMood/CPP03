/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crios <crios@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 20:21:13 by crios             #+#    #+#             */
/*   Updated: 2025/04/29 16:09:44 by crios            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void)
{
	std::cout << "======================" << std::endl;
	std::cout << "Fighter 1: \n" << std::endl;
	std::cout << "Georges St-Pierre" << std::endl;

	ClapTrap	GSP("Georges St-Pierre");

	GSP.attack("Michael Bisping");
	GSP.attack("Nick Diaz");
	
	GSP.takeDamage(10);
	GSP.takeDamage(10);
	GSP.takeDamage(10);
	GSP.takeDamage(10);
	GSP.takeDamage(10);
	
	// Should not be able to attack
	std::cout << "==== Try to attack while having no health ====" << std::endl;
	GSP.attack("BJ Penn");

	GSP.beRepaired(8);
	GSP.beRepaired(8);

	std::cout << "======================" << std::endl;
	std::cout << "Fighter 2: \n" << std::endl;
	std::cout << "Islam Makhachev" << std::endl;
	ClapTrap	Islam("Islam Makhachev");
	
	Islam.attack("Charles Oliveira");
	Islam.attack("Dustin Poirier");
	Islam.takeDamage(2);
	Islam.takeDamage(2);
	Islam.beRepaired(1);
	Islam.beRepaired(1);
	Islam.beRepaired(1);
	Islam.beRepaired(1);
	Islam.beRepaired(1);
	Islam.beRepaired(1);
	Islam.beRepaired(1);
	Islam.beRepaired(1);
	Islam.beRepaired(1);
	Islam.beRepaired(1);
	Islam.attack("Renato Moicano");
	
	return (0);
}
