/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sidrissi <sidrissi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/23 10:17:43 by sidrissi          #+#    #+#             */
/*   Updated: 2025/12/25 12:18:15 by sidrissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <iostream>
#include <vector>
#include <algorithm>

template <typename T>
void	easyfind(T& container, int value)
{
	for (unsigned int i = 0; i < container.size(); i++)
	{
		if (container[i] == value)
		{
			std::cout << "value found\n";
			return ;
		}
	}
	std::cout << "value not found\n";
}

#endif
