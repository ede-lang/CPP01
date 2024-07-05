/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ede-lang <ede-lang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 15:27:13 by ede-lang          #+#    #+#             */
/*   Updated: 2024/07/05 10:21:00 by ede-lang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

class	Zombie 
{
	private :

		std::string name;
	
	public :
	
		Zombie();
		Zombie( std::string name );
		~Zombie();
		void announce( void ) const;
};

#endif
