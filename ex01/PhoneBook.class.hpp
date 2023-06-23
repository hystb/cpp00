/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmilan <nmilan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/23 11:01:27 by nmilan            #+#    #+#             */
/*   Updated: 2023/06/23 14:50:08 by nmilan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_CLASS_HPP
# define PHONEBOOK_CLASS_HPP

# include "Contact.class.hpp"
# include <iomanip>

class PhoneBook
{
private:
	/* data */
public:
	PhoneBook(void);
	~PhoneBook();
	Contact	list[8];
	int		nbContact;
	void	showList(Contact *list);
	void	addContact(Contact *list);
	
};

# endif

