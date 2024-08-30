/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 17:17:42 by marvin            #+#    #+#             */
/*   Updated: 2024/08/28 17:17:42 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

template<typename T, typename S>

void    groot(T tab[], int lenght, const S &s)
{
    for(int i = 0; i < lenght; ++i)
        s(tab[i]);
}

template<typename T, typename S>

void    groot(T tab[], int lenght, S &s)
{
    for(int i = 0; i < lenght; ++i)
        s(tab[i]);
}

template<typename T, typename S>

void    groot(const T tab[], int lenght, S &s)
{
    for(int i = 0; i < lenght; ++i)
        s(tab[i]);
}

template<typename T, typename S>

void    groot(const T tab[], int lenght, const S &s)
{
    for(int i = 0; i < lenght; ++i)
        s(tab[i]);
}