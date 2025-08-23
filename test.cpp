/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oumondad <oumondad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 18:35:37 by oumondad          #+#    #+#             */
/*   Updated: 2025/07/10 18:52:24 by oumondad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Messi
{
    private:
        int x;
    public:
        Messi();
        Messi(int y);
        ~Messi();
        int getX(void) {return x;}
};

Messi::Messi() : x(0)
{}

Messi::Messi(int y)
{
    if (y != 5)
        throw (std::runtime_error("ASDASD"));
    x = y;
}

Messi::~Messi()
{}

int main(void)
{
    try
    {
        Messi one;
        Messi two(2);

        std::cout << "one :" << one.getX() << std::endl;
        std::cout << "two :" << two.getX() << std::endl;
    }
    catch(const std::exception& e)
    {std::cerr << e.what() << '\n';}
}
