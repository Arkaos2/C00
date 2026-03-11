#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>
#include <string>

class Contact{

	public:
		Contact();
		Contact(std::string _nom, std::string _prenom, std::string _surnom, std::string _numero, std::string _secret);
		std::string get_nom();
		std::string get_prenom();
		std::string get_surnom();
		std::string get_numero();
		std::string get_secret();

	private:
		std::string _nom;
		std::string _prenom;
		std::string _surnom;
		std::string _numero;
		std::string _secret;
};

#endif
