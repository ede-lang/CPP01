/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ede-lang <ede-lang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 11:43:11 by ede-lang          #+#    #+#             */
/*   Updated: 2024/07/05 13:34:25 by ede-lang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Weapon.hpp"

#ifndef HUMANB_HPP
# define HUMANB_HPP

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