/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oumondad <oumondad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/02 18:07:15 by oumondad          #+#    #+#             */
/*   Updated: 2025/09/03 19:16:27 by oumondad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"


template<class T> Array<T>::Array() : arr(T[0]), _size(0) {}
template<class T> Array<T>::Array(unsigned int n) : arr(new T[n]), _size(n) {}

template<class T> Array<T>::Array(unsigned int n) : arr(new T[n]), _size(n)
{
	for (int i = 0; i < _size; i++)
	{
		arr[i] = T();
	}
}

template<class T> Array<T> &Array<T>::operator = (const Array<T> &obj)
{
	if (this != &obj)
	{
		_size = obj._size;
		arr = new T[_size];
		for (int i = 0; obj[i]; i++)
			arr[i] = obj.arr[i];
	}
	return (*this);
}

template<class T> Array<T>::Array(const Array<T> &obj)
{
	*this = obj;
}

template<class T> Array<T>::~Array()
{
	delete[] arr;
}

template<class T> size_t Array<T>::size() const {return (_size);}