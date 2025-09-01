/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oumondad <oumondad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/01 20:14:56 by oumondad          #+#    #+#             */
/*   Updated: 2025/09/01 21:15:10 by oumondad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"
#include <iostream>

int main()
{
    Data data("hello", 1337);

    uintptr_t i = Serializer::serialize(&data);
    // std::cout << "i : " << i << std::endl;
    Data *newData = Serializer::deserialize(i);
    std::cout << newData->_str << std::endl;
    std::cout << newData->_nbr << std::endl;

    std::cout << "addresses:" << std::endl;
    std::cout << &data << std::endl;
    std::cout << newData << std::endl;

    return 0;
}
