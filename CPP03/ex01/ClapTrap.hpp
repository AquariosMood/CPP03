/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crios <crios@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 20:19:52 by crios             #+#    #+#             */
/*   Updated: 2025/04/29 16:33:47 by crios            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>

class ClapTrap
{
  protected:
	std::string _name;
	unsigned int _hitPoints;
	unsigned int _energyPoints;
	unsigned int _attackDamage;

  public:
	ClapTrap();
	ClapTrap(std::string name);
	~ClapTrap();

    // ===== Getters =====
	std::string getName() const { return _name; }
	unsigned int getHitPoints() const { return _hitPoints; }
	unsigned int getEnergyPoints() const { return _energyPoints; }
	unsigned int getAttackDamage() const { return _attackDamage; }

    // ===== Setters =====
    void setName(const std::string &name) { _name = name; }
    void setHitPoints(unsigned int hitPoints) { 
        _hitPoints = hitPoints; 
    }
    void setEnergyPoints(unsigned int energyPoints) { 
        _energyPoints = energyPoints; 
    }
    void setAttackDamage(unsigned int attackDamage) { 
        _attackDamage = attackDamage; 
    }
	
	void attack(const std::string &target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
};

#endif