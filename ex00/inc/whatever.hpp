/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jimmy <jimmy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 01:07:30 by jimmy             #+#    #+#             */
/*   Updated: 2025/03/12 01:15:07 by jimmy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP

template <typename T>
void	swap(T& a, T& b)
{
	T tmp = a;
	a = b;
	b = tmp;
}

template <typename T>
const T&	max(const T& a, const T& b)
{
	return (a > b ? a : b);
}

template <typename T>
const T&	min(const T& a, const T& b)
{
	return (a < b ? a : b);
}

#endif