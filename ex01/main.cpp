/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 17:17:16 by marvin            #+#    #+#             */
/*   Updated: 2024/08/28 17:17:16 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

void    hello(std::string groot)
{
    std::cout << groot;
}

void    nbr(int n)
{
    std::cout << n << " . ";
}

int main(void)
{
    int lenght = 3;
    std::string tab[lenght];

    tab[0] = "coucou";
    tab[1] = " les ";
    tab[2] = "amis.";
    ::groot(tab, lenght, hello);
    std::cout << std::endl;

    int data[] = {1, 3, 5, 9};
    lenght = 4;
    ::groot(data, lenght, nbr);
    std::cout << std::endl;
    return 0;
}
