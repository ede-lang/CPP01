/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ede-lang <ede-lang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 12:02:48 by ede-lang          #+#    #+#             */
/*   Updated: 2024/07/08 14:26:44 by ede-lang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main()
{
	Harl harl;
	
	harl.complain("DEBUG");

	harl.complain("INFO");

	harl.complain("WARNING");

	harl.complain("ERROR");

	harl.complain("NOTHING");

	return 0;
}

