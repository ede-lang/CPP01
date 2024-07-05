/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ede-lang <ede-lang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 15:27:13 by ede-lang          #+#    #+#             */
/*   Updated: 2024/07/05 10:12:18 by ede-lang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

#ifndef ZOMBIE_CLASS_HPP
# define ZOMBIE_CLASS_HPP

class	Zombie 
{
	private :

		std::string name;
	
	public :
	
		Zombie();
		Zombie( std::string name );
		~Zombie();
		void announce( void ) const;
		void setName( std::string name );

};

#endif
