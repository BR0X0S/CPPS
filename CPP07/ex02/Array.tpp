/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oumondad <oumondad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/02 18:07:15 by oumondad          #+#    #+#             */
/*   Updated: 2025/09/08 21:32:09 by oumondad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

template <class T> Array<T>::Array(): arr(NULL) {}
template <class T> Array<T>::Array(unsigned int n): arr(new T[n]()) , _size(n) {}

template <class T>
Array<T>::Array(const Array<T> &obj)
{
	_size = obj._size;
	arr = new T[_size];

	for (unsigned int i = 0; i < _size; i++)
		arr[i] = obj.arr[i];
}

template <class T>
Array<T> &Array<T>::operator = (const Array<T> &obj)
{
	if (this != &obj)
	{
		delete []arr ;
		_size = obj._size;
		arr = new T[_size];

		for (unsigned int i = 0; i < _size; i++)
			arr[i] = obj.arr[i];
	}
	return (*this);
}

template <class T>
T &Array<T>::operator [] (unsigned int n)
{
	if (n >= _size)
		throw std::runtime_error ("Index is out of bounds!");		
	return (arr[n]);
}

template <class T>
unsigned int Array<T>::size() const {return _size;}

template <class T>
Array<T>::~Array()
{
	delete []arr ;
}
