#include <iostream>
#include <string>

#include "Contact.hpp"
#include "Phonebook.hpp"

Contact::Contact() {}
Contact::Contact(std::string nom, std::string prenom, std::string surnom, std::string numero, std::string secret) : _nom(nom), _prenom(prenom), _surnom(surnom), _numero(numero), _secret(secret) {}

std::string Contact::get_nom()
{
	return _nom;
}

std::string Contact::get_prenom()
{
	return _prenom;
}

std::string Contact::get_surnom()
{
	return _surnom;
}

std::string Contact::get_numero()
{
	return _numero;
}

std::string Contact::get_secret()
{
	return _secret;
}
