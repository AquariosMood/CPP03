/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crios <crios@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 20:19:41 by crios             #+#    #+#             */
/*   Updated: 2025/04/29 17:30:08 by crios            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "ClapTrap default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "ClapTrap default constructor called" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap default destructor called" << std::endl;
}

void ClapTrap::attack(const std::string &target)
{
	int newHitPoints = this->getHitPoints();
	int newEnergyPoints = this->getEnergyPoints() - 1;
	if (newEnergyPoints <= 0)
	{
		std::cout << "🪫🪫 " << this->getName() << "'s energy points are too low! 🪫🪫\n" << std::endl;
		return ;
	}
	if (newHitPoints <= 0)
	{
		std::cout << "💀💀 " << this->getName() << "'s health is too low! Please heal! 💀💀\n" << std::endl;
		return ;
	}
	// ENERGY POINTS - 1
	this->setEnergyPoints(this->getEnergyPoints() - 1);
	
	this->setAttackDamage(this->_attackDamage);
	std::cout << "🤼 " << this->getName() << " attacks " << target << ", causing " << this->getAttackDamage() << " points of damage!" << std::endl;
	//	std::cout << this->getName() << ": Attack damage: " << this->getAttackDamage() << std::endl;
	std::cout << "✨ " << this->getName() << ": Energy Points: " << this->getEnergyPoints() << "\n" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	int newHitPoints = this->getHitPoints() - amount;
	if (newHitPoints >= 0)
	{
		this->setHitPoints(newHitPoints);
		std::cout << "🤕 " << this->_name << " took " << amount << " points of damage!" << std::endl;
		std::cout << "💙 " << this->getName() << ": Health: " << this->getHitPoints() << std::endl;
		std::cout << "✨ " << this->getName() << ": Energy Points: " << this->getEnergyPoints() << "\n" << std::endl;
	}
	else
	{
		std::cout << "💀💀 " << this->getName() << "'s health is too low! Please heal! 💀💀\n" << std::endl;
	}
}

void ClapTrap::beRepaired(unsigned int amount)
{	
	int newEnergyPoints = this->getEnergyPoints() - 1;
	if (newEnergyPoints < 0)
	{
		std::cout << "🪫🪫 " << this->getName() << "'s energy points are too low! 🪫🪫\n" << std::endl;
		return ;
	}
	// ENERGY POINTS - 1
	this->setEnergyPoints(this->getEnergyPoints() - 1);

	this->setHitPoints(this->getHitPoints() + amount);
	std::cout << "❤️‍🩹 " << this->_name << " healed " << amount << " points" << std::endl;
	std::cout << "💙 " << this->getName() << ": Health: " << this->getHitPoints() << std::endl;
	std::cout << "✨ " << this->getName() << ": Energy Points: " << this->getEnergyPoints() << "\n" << std::endl;
}
