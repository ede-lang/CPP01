/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ede-lang <ede-lang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 12:02:48 by ede-lang          #+#    #+#             */
/*   Updated: 2024/07/08 14:19:03 by ede-lang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int argc, char const *argv[])
{
	Harl harl;
	
	if (argc != 2)
	{
		std::cout << "wrong arguments" << std::endl;
		return (1);
	}
	harl.complain(argv[1]);

	return 0;
}

