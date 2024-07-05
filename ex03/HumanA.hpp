/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ede-lang <ede-lang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 11:40:01 by ede-lang          #+#    #+#             */
/*   Updated: 2024/07/05 13:16:40 by ede-lang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Weapon.hpp"

#ifndef HUMANA_HPP
# define HUMANA_HPP

class HumanA
{
	private:

		Weapon &_weapon;
		std::string _name;

	public:
		
		HumanA(std::string name, Weapon &weapon);
		~HumanA();
		void attack( void ) const;

};

#endif