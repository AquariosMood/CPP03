/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crios <crios@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 20:21:13 by crios             #+#    #+#             */
/*   Updated: 2025/04/29 17:08:04 by crios            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main(void)
{
	std::cout << "======================" << std::endl;
	std::cout << "ClapTrap: Fighter 1: \n" << std::endl;
	ClapTrap DJ("Demetrious Johnson");
	DJ.attack("Henry Cejudo");
	DJ.takeDamage(5);
	DJ.beRepaired(3);
	std::cout << "======================" << std::endl;

	std::cout << "======================" << std::endl;
	std::cout << "ScavTrap: Fighter 2: \n" << std::endl;
	ScavTrap ZhangWeili("Zhang Weili 张伟丽");
	ZhangWeili.attack("Yan Xiaonan");
	ZhangWeili.takeDamage(5);

	std::cout << "== GUARD GATE ==" << std::endl;
	ZhangWeili.guardGate();
	ZhangWeili.beRepaired(3);
	std::cout << "======================" << std::endl;
	
	return (0);
}
