/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crios <crios@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 20:21:13 by crios             #+#    #+#             */
/*   Updated: 2025/04/29 17:31:21 by crios            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int	main(void)
{
	std::cout << "======================" << std::endl;
	std::cout << "ClapTrap: Fighter 1: \n" << std::endl;
	ClapTrap Khabib("Khabib Nurmagomedov");
	Khabib.attack("Conor McGregor");

	std::cout << "======================" << std::endl;
	std::cout << "ScavTrap: Fighter 2: \n" << std::endl;
	ScavTrap Manon("Manon Fiorot");
	Manon.attack("Valentina Shevchenko");
	Manon.guardGate();

	std::cout << "======================" << std::endl;
	std::cout << "FragTrap: Fighter 3: \n" << std::endl;
	FragTrap Pereira("Alex Pereira");
	Pereira.attack("Israel Adesanya");
	Pereira.beRepaired(8);
	Pereira.highFivesGuys();
	
	return (0);
}
