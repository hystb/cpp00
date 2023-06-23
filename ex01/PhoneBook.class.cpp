/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmilan <nmilan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/23 11:01:24 by nmilan            #+#    #+#             */
/*   Updated: 2023/06/23 15:16:39 by nmilan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.class.hpp"

PhoneBook::PhoneBook(void){
	PhoneBook::nbContact = 0;
}

PhoneBook::~PhoneBook(void){
	
}
void	PhoneBook::addContact(Contact *element){
	
	static int	i = 0;
	
	std::cout << "Please enter the first name" << std::endl;
	std::getline (std::cin, element[i].firstName);
	std::cout << "Please enter the last name" << std::endl;
	std::getline (std::cin, element[i].lastName);
	std::cout << "Please enter the nickname" << std::endl;
	std::getline (std::cin, element[i].nickname);
	std::cout << "Please enter the phone number" << std::endl;
	std::getline (std::cin, element[i].phoneNumber);
	std::cout << "Please enter the darkest secret" << std::endl;
	std::getline (std::cin, element[i].darkestSecret);
	i++;
	if (this->nbContact < 8)
		this->nbContact++;
	if (i == 8)
		i = 0;
}
void	PhoneBook::showList(Contact *list){
	int	i = 0;

	std::cout << "|";
	std::cout << std::setw(10);
	std::cout << "index";
	std::cout << "|";
	std::cout << std::setw(10);
	std::cout << "first name";
	std::cout << "|";
	std::cout << std::setw(10);
	std::cout << "last name";
	std::cout << "|";
	std::cout << std::setw(10);
	std::cout << "nickname";
	std::cout << "|" << std::endl;
	while (i < this->nbContact)
	{
		std::cout << "|";
		std::cout << std::setw(10);
		std::cout << (i + 1);
		std::cout << "|";
		std::cout << std::setw(10) << list[i].firstName;
		std::cout << "|";
		std::cout << std::setw(10);
		std::cout << list[i].lastName;
		std::cout << "|";
		std::cout << std::setw(10);
		std::cout << list[i].nickname;
		std::cout << "|" << std::endl;
		i++;
	}
}
