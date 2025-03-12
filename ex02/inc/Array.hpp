/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jimmy <jimmy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 17:02:42 by jimmy             #+#    #+#             */
/*   Updated: 2025/03/12 23:12:00 by jimmy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <exception>

template <typename T>
class Array
{
	private:
		T*				_array;
		unsigned int	_size;
	
	public:
		Array();
		Array(unsigned int n);
		~Array();
		Array(const Array& other);
		Array& operator=(const Array& other);

		T&	operator[](unsigned int i);

		class	IndexOutOfBoundException : public std::exception
		{
			public:
				virtual const char	*what() const throw();
		};
};

# include "Array.tpp"

#endif