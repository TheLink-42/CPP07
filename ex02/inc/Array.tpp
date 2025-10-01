/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jimmy <jimmy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 16:43:46 by jimmy             #+#    #+#             */
/*   Updated: 2025/03/12 23:13:14 by jimmy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_TPP
# define ARRAY_TPP

template <typename T>
Array<T>::Array(): _array(0), _size(0)
{

}

template <typename T>
Array<T>::Array(unsigned int n):  _size(n)
{
	try {
		_array = new T[n];
	}
	catch (const std::bad_alloc& e) {
		_array = 0;
		_size = 0;
		throw Array<T>::IndexOutOfBoundException();
	}
}


template <typename T>
Array<T>::~Array()
{
	delete[] _array;
}

template <typename T>
Array<T>::Array(const Array<T>& other): _array(0), _size(other._size)
{
	if (_size > 0)
	{
		_array = new T[_size];
		for (unsigned int i = 0; i < _size; i++)
			_array[i] = other._array[i];
	}
}

template <typename T>
Array<T>&	Array<T>::operator=(const Array<T>& other)
{
	if (*this != other)
	{
		delete[] _array;
		_size = other._size;
		if (_size > 0)
		{
			_array = new T[_size];
			for(unsigned int i = 0; i < _size; i++)
				_array[i] = other._array[i];
		}
		else
			_array = 0;
	}
	return *this;
}

template <typename T>
T&	Array<T>::operator[](unsigned int i)
{
	if (i >= _size)
		throw Array<T>::IndexOutOfBoundException();
	return _array[i];
}

template <typename T>
unsigned int	Array<T>::size() const
{
	return _size;
}

template <typename T>
const char	*Array<T>::IndexOutOfBoundException::what(void) const throw()
{
	return ("Index out of bounds");
}

#endif