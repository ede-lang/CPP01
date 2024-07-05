/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ede-lang <ede-lang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 15:49:40 by ede-lang          #+#    #+#             */
/*   Updated: 2024/07/05 10:32:39 by ede-lang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.class.hpp"

Zombie* zombieHorde( int N, std::string name ){
	Zombie *zomb = new Zombie[N];

	for (int i = 0; i < N; i++)
		zomb[i].setName(name);
	
	return (zomb);
}