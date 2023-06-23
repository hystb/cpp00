/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmilan <nmilan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/23 11:39:51 by nmilan            #+#    #+#             */
/*   Updated: 2023/06/23 14:46:25 by nmilan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.class.hpp"
#include "PhoneBook.class.hpp"

int	main(void) 
{
	std::string	buff;
	PhoneBook list;

	while (1)
	{
		std::cout << "Please enter a command" << std::endl;
		std::getline(std::cin, buff);
		if (buff == "ADD")
			list.addContact(list.list);
		if (buff == "SEARCH")
		{
			list.showList(list.list);
		}
		if (buff == "EXIT" || std::cin.eof())
		{
			return (0);
		}
	}
}
