/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ede-lang <ede-lang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 15:27:13 by ede-lang          #+#    #+#             */
/*   Updated: 2024/07/05 10:13:27 by ede-lang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.class.hpp"

Zombie::Zombie ( void ) {}

Zombie::Zombie( std::string name ) : name(name) {}

Zombie::~Zombie ( void ) {}

void	Zombie::announce( void ) const {
	std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::setName( std::string name ) {
	this->name = name;
}
