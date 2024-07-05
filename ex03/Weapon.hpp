/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ede-lang <ede-lang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 11:30:53 by ede-lang          #+#    #+#             */
/*   Updated: 2024/07/05 12:20:34 by ede-lang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>

#ifndef WEAPON_HPP
# define WEAPON_HPP

class Weapon
{
	private:
		
		std::string type;

	public:

		Weapon(std::string type);
		~Weapon();
		std::string const	&getType() const;
		void	setType(std::string type);

};

#endif