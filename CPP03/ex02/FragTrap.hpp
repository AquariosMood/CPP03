/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crios <crios@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 16:41:46 by crios             #+#    #+#             */
/*   Updated: 2025/04/29 16:55:46 by crios            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "FragTrap.hpp"
#include "ClapTrap.hpp"
#include <iostream>

class FragTrap : public ClapTrap
{
    private:
    public:
        FragTrap();
        FragTrap(std::string name);
        ~FragTrap();
    
        void    highFivesGuys(void);
};

#endif