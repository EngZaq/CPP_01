/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zal-qais <zal-qais@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/08 20:21:02 by zal-qais          #+#    #+#             */
/*   Updated: 2026/01/08 20:28:51 by zal-qais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

class Weapon 
{
    private:
        std:: string type;
    public:
        const std::string &getType( void );
        void setType( std::string type );
};


