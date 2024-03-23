/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ancorder <ancorder@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 18:11:42 by ancorder          #+#    #+#             */
/*   Updated: 2024/01/30 11:44:40 by ancorder         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Duck.hpp"
#include <stdlib.h>

int main(void) {

    Duck *DuckHeap = newDuck("Heap");
	DuckHeap->announce();
    
    randomDuck("Stack");

    delete DuckHeap;

    return (0);
}
