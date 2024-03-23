/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Duck.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ancorder <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 18:11:42 by ancorder          #+#    #+#             */
/*   Updated: 2024/01/27 18:24:33 by ancorder         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Duck_HPP
# define Duck_HPP

#include <string>

class Duck {
private:
	std::string _name;

public:
	void announce(void);
	
	// Constructor
	Duck(std::string name);

	// Destructor
	~Duck();
};

Duck* newDuck(std::string name);
void randomDuck(std::string name);

#endif