/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oumondad <oumondad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/17 18:05:06 by oumondad          #+#    #+#             */
/*   Updated: 2025/05/30 19:16:12 by oumondad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

int    main(void)
{
    Point    a;
    Point    b(5, 5);
    Point    z(0, 5);
    Point    c(z);

    Point    point(3, 4);

    if (bsp(a, b, c, point))
        std::cout << "TRUE: The Point is INSIDE the Triangle!" << std::endl;
    else
        std::cout << "FALSE: The Point is NOT INSIDE the Triangle!" << std::endl;
}
