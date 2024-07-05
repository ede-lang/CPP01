/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ede-lang <ede-lang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 15:52:02 by ede-lang          #+#    #+#             */
/*   Updated: 2024/07/05 10:20:07 by ede-lang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include "Zombie.class.hpp"

void	randomChump( std::string name );
Zombie	*newZombie( std::string name );

int main( void )
{
	Zombie *Hug = newZombie("Hug");
	
	randomChump("Bard");
	Hug->announce();
	delete Hug;
	return (0);
}
