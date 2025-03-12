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

void	iter(T* array, size_t len, void (*f)(T&))
{
	for (size_t i = 0; i < len; i++)
		f(array[i]);
}

#endif