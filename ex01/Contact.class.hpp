/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmilan <nmilan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/23 11:01:22 by nmilan            #+#    #+#             */
/*   Updated: 2023/06/23 14:32:38 by nmilan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_CLASS_HPP
# define CONTACT_CLASS_HPP

# include <iostream>
# include <string>

class Contact {
	
	private:

	public:
		Contact(void);
		~Contact();
		std::string	firstName;
		std::string	lastName;
		std::string nickname;
		std::string	phoneNumber;
		std::string	darkestSecret;
};

#endif
