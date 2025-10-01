/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jimmy <jimmy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 15:56:55 by jimmy             #+#    #+#             */
/*   Updated: 2025/03/12 16:20:26 by jimmy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

# include <cstddef>

template <typename T>

void	iter(T* array, const int len, void (*f)(T&))
{
	for (int i = 0; i < len; i++)
		f(array[i]);
}

void	iter(T* array, const int len, void (*f)(const T&))
{
	for (int i = 0; i < len; i++)
		f(array[i]);
}


#endif