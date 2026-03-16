#include <iostream>
#include <string>
#include <iomanip>
#include "Contact.hpp"
#include "Phonebook.hpp"

PhoneBook::PhoneBook() : _nb_contact(0), _index(0) {}

PhoneBook::~PhoneBook(){

}

int PhoneBook::get_index()
{
	return _index;
}

std::string format(std::string str)
{
	if (str.length() > 10)
		return str.substr(0, 9) + ".";
	return str;
}

void PhoneBook::search_contact()
{
	std::cout << std::setw(10) << "Index"
			<< "|" << std::setw(10) << "Nom"
			<< "|" << std::setw(10) << "Prenom"
			<< "|" << std::setw(10) << "Surnom" << std::endl;
	for(int i = 0; i < _nb_contact; i++)
	{
		std::cout  << std::setw(10) << i + 1
			<< '|' << std::setw(10) << format(_repertoire[i].get_nom())
			<< "|" << std::setw(10) << format(_repertoire[i].get_prenom())
			<< "|" << std::setw(10) << format(_repertoire[i].get_surnom())
			<< std::endl;
	}
	std::string choix;
	std::cin.ignore();
	if(_nb_contact > 0)
		std::cout << "Index du contact souhuaité : ";
	std::getline(std::cin, choix);
	int	index = std::atoi(choix.c_str());
	if (index <= 0 || index > _nb_contact)
		return;
	std::cout << std::left << std::setw(10) << _repertoire[index - 1].get_nom()
			<< std::endl << std::left << std::setw(10) << _repertoire[index - 1].get_prenom()
			<< std::endl << std::left << std::setw(10) << _repertoire[index - 1].get_surnom()
			<< std::endl << std::left << std::setw(10) << _repertoire[index - 1].get_numero()
			<< std::endl << std::left << std::setw(10) << _repertoire[index - 1].get_secret()
			<< std::endl;
}

void PhoneBook::add_contact()
{
	std::string info[5];
	std::cin.ignore();

	std::string champs[5] = {"Nom", "Prenom", "Surnom", "Numero", "Secret"};
	for (int i = 0; i < 5; i++)
	{
		while (info[i].length() == 0)
		{
			std::cout << champs[i] << ": ";
			std::getline(std::cin, info[i]);
		}
	}
	_repertoire[_index] = Contact(info[0], info[1] ,info[2],info[3],info[4]);
	_index = (_index + 1) % 8;
	if (_nb_contact < 8)
		_nb_contact++;
}
