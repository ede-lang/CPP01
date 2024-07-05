/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ede-lang <ede-lang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 13:49:25 by ede-lang          #+#    #+#             */
/*   Updated: 2024/07/05 15:06:00 by ede-lang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

void replaceInFile(std::string filename, std::string s1, std::string s2)
{
	std::string str;
	std::string line;
	size_t	pos;

	std::ifstream inputFile (filename);
	if (inputFile.is_open()) {
		std::ofstream outputFile (filename + ".replace");
		while (getline(inputFile,line)) {
			str += line;
			if (!inputFile.eof())
				str += '\n';
		}

		pos = str.find(s1);
		while (pos < str.length())
		{
			str.erase(pos, s1.length());
            str.insert(pos, s2);
			pos = str.find(s1, pos + s2.length());
		}
		outputFile << str;
		inputFile.close();
		outputFile.close();

	} else {
		std::cout << "File doesn't exist !" << std::endl;
	}
}


int main(int argc, char const *argv[])
{
	if (argc != 4) {
		std::cout << "Wrong number of arguments" << std::endl \
		<< "Usage : <filename> <str to find> <str to replace with>" << std::endl;
		return (1);
	} else
		replaceInFile(argv[1], argv[2], argv[3]);
	return (0);
}
