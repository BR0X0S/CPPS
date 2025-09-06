/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oumondad <oumondad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/02 17:48:05 by oumondad          #+#    #+#             */
/*   Updated: 2025/09/03 19:15:30 by oumondad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>

template <typename T>
class Array
{
    private:
    
        T       *arr;
        size_t  _size;
        
    public:

        Array();
        Array(unsigned int n);
        Array(const Array &obj);
        ~Array();
        Array &operator = (const Array &obj);
        T &operator [] (unsigned int index);
        size_t  size() const;

};

#endif