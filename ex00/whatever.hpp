/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   template.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 16:36:42 by marvin            #+#    #+#             */
/*   Updated: 2024/08/28 16:36:42 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

template<typename T>

T max(const T& a, const T& b)
{
    if (a < b || a == b)
        return b;
    else
        return a;
}

template<typename T>

T min(const T& a, const T& b)
{
    if (a > b || a == b)
        return b;
    else
        return a;
}

template<typename T>

void    swap(T& a, T& b)
{
    T c;

    c = a;
    a = b;
    b = c;
}


