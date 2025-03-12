/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jimmy <jimmy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 16:17:41 by jimmy             #+#    #+#             */
/*   Updated: 2025/03/12 16:21:19 by jimmy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "iter.hpp"

template <typename U>
void print(U& x) {
    std::cout << x << std::endl;
}

int main() {
    int numbers[] = {1, 2, 3, 4, 5};
    size_t len = sizeof(numbers) / sizeof(numbers[0]);
    
    // Instantiate print for int and pass it to iter.
    iter(numbers, len, print<int>);
    
    std::string words[] = {"hello", "world"};
    size_t wordCount = sizeof(words) / sizeof(words[0]);
    
    // Instantiate print for std::string and pass it to iter.
    iter(words, wordCount, print<std::string>);
    
    return 0;
}