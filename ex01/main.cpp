/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ede-lang <ede-lang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 15:52:02 by ede-lang          #+#    #+#             */
/*   Updated: 2024/07/05 10:31:04 by ede-lang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include "Zombie.class.hpp"

Zombie* zombieHorde( int N, std::string name );

int main( void )
{
	Zombie *horde;

	horde = zombieHorde(20,"mobZomb");
	for (int i = 0; i < 20; i++)
	{
		horde[i].announce();
	}
	
	delete [] horde;
	
	return (0);
}
