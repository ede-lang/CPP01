/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ede-lang <ede-lang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 11:43:11 by ede-lang          #+#    #+#             */
/*   Updated: 2024/07/17 10:20:06 by ede-lang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include <iostream>
#include "Weapon.hpp"

class HumanB
{
	private:

		Weapon *_weapon;
		std::string _name;

	public:
		
		HumanB(std::string name);
		~HumanB();
		void attack( void );
		void setWeapon(Weapon &weapon);

};

#endif