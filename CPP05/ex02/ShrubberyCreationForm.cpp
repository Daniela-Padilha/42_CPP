/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddo-carm <ddo-carm@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 16:46:52 by ddo-carm          #+#    #+#             */
/*   Updated: 2025/10/21 17:31:55 by ddo-carm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/ShrubberyCreationForm.hpp"
#include <fstream>

/*------------------------------Constructors---------------------------------*/

ShrubberyCreationForm::ShrubberyCreationForm()
    : AForm("Undefined", 145, 137), _target("Undefined")
{
  std::cout << BGRN "A Shrubbery Creation Form was created\n" RES;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target)
    : AForm(target, 145, 137), _target(target)
{
  std::cout << BGRN "A Shrubbery Creation Form with target <" << target << "> was created\n" RES;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& other)
    : AForm(other.getName(), other.getSignGrade(), other.getExecuteGrade()), _target(other._target)
{
  std::cout << BYEL "Shrubbery Creation Form copy constructor was called\n" RES;
}

/*-------------------------------Destructors---------------------------------*/

ShrubberyCreationForm::~ShrubberyCreationForm()
{
  std::cout << BRED "A Shrubbery Creation Form was destroyed\n" RES;
}

/*------------------------------Operators------------------------------------*/

ShrubberyCreationForm& ShrubberyCreationForm::operator = (const ShrubberyCreationForm& other)
{
  std::cout << CYA "Shrubbery Creation Form copy assignment operator was called\n" RES;
  if (this != &other)
    this->_target = other._target;
  return (*this);
}

/*-----------------------------Member Functions------------------------------*/

std::string	ShrubberyCreationForm::getTarget() const
{
  return (this->_target);
}

void		ShrubberyCreationForm::childExecute() const
{
  std::string fileName = this->_target + "_shrubbery ";
  std::ofstream outfile(fileName.c_str());
  if (!outfile)
  {
    std::cerr << BRED "Error: could not create file\n" RES;
    return ;
  }
  outfile << "              * *    " << std::endl;
  outfile << "           *    *  *" << std::endl;
  outfile << "      *  *    *     *  *" << std::endl;
  outfile << "     *     *    *  *    *" << std::endl;
  outfile << " * *   *    *    *    *   *" << std::endl;
  outfile << " *     *  *    * * .#  *   *" << std::endl;
  outfile << " *   *     * #.  .# *   *" << std::endl;
  outfile << "  *     \"#.  #: #\" * *    *" << std::endl;
  outfile << " *   * * \"#. ##\"       *" << std::endl;
  outfile << "   *       \"###\"" << std::endl;
  outfile << "             \"##\"" << std::endl;
  outfile << "              ##." << std::endl;
  outfile << "              .##:" << std::endl;
  outfile << "              :###" << std::endl;
  outfile << "              ;###" << std::endl;
  outfile << "            ,####." << std::endl;
  outfile << "/\/\/\/\/\/.######.\/\/\/\/\\" << std::endl;
  outfile.close();
  std::cout << BGRN "Shrubbery created in " << fileName << "\n" RES;
}
