/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oumondad <oumondad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/02 18:18:02 by oumondad          #+#    #+#             */
/*   Updated: 2025/09/02 19:00:21 by oumondad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

void doubleValue(int &x)
{
	x *= 2;
}

void Toupper(std::string &x)
{
    for (int i = 0; x[i]; i++)
        x[i] = (char)toupper(x.c_str()[i]);
}

int main()
{
    std::cout << "test with int array\n" << std::endl;
    int array[] = {1, 2, 3, 4, 5};
    size_t length = sizeof(array) / sizeof(array[0]);

    std::cout << "Original array: ";
    for (size_t i = 0; i < length; ++i)
        std::cout << array[i] << " ";
    std::cout << std::endl;
    
    iter(array, length, doubleValue);
    
    std::cout << "Doubled array: ";
    for (size_t i = 0; i < length; ++i)
        std::cout << array[i] << " ";
    std::cout << std::endl;

    std::cout << "\n\ntest with string array\n" << std::endl;
    std::string strArray[] = {"Hello", "World", "Test"};
    size_t strLength = sizeof(strArray) / sizeof(strArray[0]);

    std::cout << "Original array: ";
    for (size_t i = 0; i < strLength; ++i)
        std::cout << strArray[i] << " ";
    std::cout << std::endl;

    iter(strArray, strLength, Toupper);

    std::cout << "Uppercase array: ";
    for (size_t i = 0; i < strLength; ++i)
        std::cout << strArray[i] << " ";
    std::cout << std::endl;

    return 0;
}
