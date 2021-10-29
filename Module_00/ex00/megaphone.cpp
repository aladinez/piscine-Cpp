/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aez-zaou <aez-zaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 11:47:29 by aez-zaou          #+#    #+#             */
/*   Updated: 2021/10/29 12:17:04 by aez-zaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int argc, char **argv)
{
    if (argc == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    else
    {
        int i = 1;
        while (argv[i])
        {
            int j = 0;
            while (argv[i][j])
            {
                std::cout << (char)toupper(argv[i][j]);
                j++;
            }
            i++;
        }
        std::cout << std::endl;
    }
    return (0);
}