#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <iostream>
#include <string>
#include "Contact.hpp"

class PhoneBook {

	public :
		PhoneBook(void);
		~PhoneBook();
		void add_contact();
		void search_contact();

	private :
		Contact _repertoire[8];
		int _nb_contact;
		int _index;
};
#endif
