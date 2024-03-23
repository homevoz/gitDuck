/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Duck.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ancorder <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 18:11:42 by ancorder          #+#    #+#             */
/*   Updated: 2024/01/27 18:24:33 by ancorder         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Duck.hpp"
#include <iostream>

// Implement the constructor
Duck::Duck(std::string name) 
{
	_name = name;
//	std::cout << "Duck " << _name << " created." << std::endl;
}

// Implement Destructor
Duck::~Duck() 
{
//	std::cout << "Duck " << _name << " destroyed." << std::endl;
}

// Ducks announce themselves
void Duck::announce(void)
{
	std::cout << _name << ": kUakUak kUakUak...SplaSHSHSHsh" << std::endl;
}
