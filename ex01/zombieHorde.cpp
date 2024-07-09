/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ede-lang <ede-lang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 15:49:40 by ede-lang          #+#    #+#             */
/*   Updated: 2024/07/09 16:50:55 by ede-lang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name ){

	if (!(N > 0 && N < 10000))
		return (NULL);
	Zombie *zomb = new Zombie[N];
	for (int i = 0; i < N; i++)
		zomb[i].setName(name);
	
	return (zomb);
}