/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ede-lang <ede-lang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 11:31:10 by ede-lang          #+#    #+#             */
/*   Updated: 2024/07/05 12:20:43 by ede-lang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon (std::string type) : type(type) {}

Weapon::~Weapon () {}

std::string const	&Weapon::getType() const {
	std::string const &ref = this->type;
	return (ref);
}

void	Weapon::setType(std::string type) {
	this->type = type;
}

