/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ede-lang <ede-lang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 15:52:02 by ede-lang          #+#    #+#             */
/*   Updated: 2024/07/09 16:42:47 by ede-lang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int main( void )
{
	std::string	str = "HI THIS IS BRAIN";

	std::string	&stringREF = str;

	std::string *stringPTR = &str;

	std::cout << "Address of str : " << &str << std::endl;
	std::cout << "Address held by stringREF : " << &stringREF << std::endl;
	std::cout << "Address held by stringPTR : " << stringPTR << std::endl;


	std::cout << "Value of str : " << str << std::endl;
	std::cout << "Value of stringREF : " << stringREF << std::endl;
	std::cout << "Value of stringPTR : " << *stringPTR << std::endl;

	return (0);
}
