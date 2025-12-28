/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sidrissi <sidrissi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/28 12:39:04 by sidrissi          #+#    #+#             */
/*   Updated: 2025/12/28 12:40:17 by sidrissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #ifndef MUTANTSTACK_HPP
// #define MUTANTSTACK_HPP

// #include <iostream>
// #include <stack>

// template <typename T>
// class MutantStack : public std::stack<T>
// {
//     private:
//         // std::stack<T>  data;
//     public:
//         /* orthodox>? */

// };

// #endif




#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <stack>

template <typename T>
class MutantStack : public std::stack<T>
{
public:
    // Orthodox Canonical Form
    MutantStack() {}
    MutantStack(const MutantStack& other) : std::stack<T>(other) {}
    MutantStack& operator=(const MutantStack& other)
    {
        if (this != &other)
            std::stack<T>::operator=(other);
        return *this;
    }
    ~MutantStack() {}

    // Iterator typedef
    typedef typename std::stack<T>::container_type::iterator iterator;

    // Iterator access
    iterator begin() { return this->c.begin(); }
    iterator end() { return this->c.end(); }
};

#endif
