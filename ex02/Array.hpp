/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogregoir <ogregoir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 19:21:44 by ogregoir          #+#    #+#             */
/*   Updated: 2024/08/30 18:37:36 by ogregoir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include <stdexcept>
#include <stdlib.h>

template<typename T>

class Array
{
    public :
        unsigned int length;
        T *elements;
        
        Array() : length(0) {
            this->elements = new T;
        }
        
        Array(unsigned int n) : length(n) {
            this->elements = new T[n];
        }
        
        Array(const Array &copy) : length(copy.length), elements(new T[copy.length]) {
            for (unsigned int i = 0; i < copy.length; ++i)
                this->elements[i] = copy.elements[i];
        }
        
        Array &operator=(const Array &copy) {
            if (this == &copy) {
                return *this;
            }
            delete[] elements;
            length = copy.length;
            elements = new T[copy.length];
            for (int i = 0; copy.elements[i]; i++)
                this->elements[i] = copy.elements[i];
            return *this;
        }
        
        unsigned int size(){
            return length;
        }

        class ArrayException : public std::exception 
        {
            const char* what(void) const throw()
            {
                return "index is out of bounds";
            }
        };
        
        ~Array() {
            delete[] elements;
        }
        
        T& operator[](unsigned int i) {
            if (i >= length)
                throw ArrayException();
            return elements[i];
        }
        
        const T& operator[](unsigned int i) const {
            if (i >= length) {
                throw ArrayException();
        }
        return elements[i];
    }
};