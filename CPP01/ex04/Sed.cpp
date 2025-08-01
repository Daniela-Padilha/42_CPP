/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sed.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddo-carm <ddo-carm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 17:36:25 by ddo-carm          #+#    #+#             */
/*   Updated: 2025/07/29 14:32:34 by ddo-carm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/Sed.hpp"

std::string	replaceAll(const std::string& line, const std::string& s1,
		const std::string& s2);

//opens file, reads, creates new file and writes into it replacing strings

void sed(std::string filename, std::string s1, std::string s2)
{
	std::string   newfilename = filename + ".replace";
	std::ifstream file;
	
	file.open(filename.c_str());
	if (!file.is_open())
	{
		std::cerr << "Error: Could not open file " << filename << std::endl;
		return ;
	}
	
	std::ofstream newfile(newfilename.c_str());
	if (!newfile.is_open())
	{
		std::cerr << "Error: could not create file " << newfilename << std::endl;
		file.close();
		return ;
	}
	
	std::string line;
	while (std::getline(file, line))
	{
		newfile << replaceAll(line, s1, s2) << std::endl;
	}
	
	file.close();
	newfile.close();
}

std::string	replaceAll(const std::string& line, const std::string& s1,
		const std::string& s2)
{
	std::string res;
	size_t		i = 0;

	while (1)
	{
		size_t ifound = line.find(s1, i);
		if (ifound == std::string::npos)
		{
			res += line.substr(i);
			break ;
		}
		res += line.substr(i, ifound - i);
		res += s2;
		i = ifound + s1.length();
	}
	return (res);
}
