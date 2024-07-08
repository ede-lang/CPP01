/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ede-lang <ede-lang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 12:02:48 by ede-lang          #+#    #+#             */
/*   Updated: 2024/07/08 13:19:48 by ede-lang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main()
{
	Harl harl;
	
	std::cout << "Debug :" << std::endl;
	harl.complain("DEBUG");

	std::cout << "Info :" << std::endl;
	harl.complain("INFO");

	std::cout << "Warning :" << std::endl;
	harl.complain("WARNING");

	std::cout << "Error :" << std::endl;
	harl.complain("ERROR");

	std::cout << "Nothing :" << std::endl;
	harl.complain("NOTHING");

	return 0;
}

