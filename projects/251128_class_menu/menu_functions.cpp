#include "menu_functions.hpp"

#include <cstdlib>
#include <iostream>

namespace {
	const zlata::MenuItem* show_menu(const zlata::MenuItem* current) {
		for (int i = 1; i < current->children_count; i++) {
			std::cout << current->children[i]->title << std::endl;
		}
		std::cout <<  current->children[0]->title << std::endl;
		std::cout << "Искусcтво России > ";
		
		int user_input;
		std::cin >> user_input;
		std::cout << std::endl;
		
		return current->children[user_input];
	}
}

const zlata::MenuItem* zlata::show_main_menu(const MenuItem* current) {
	std::cout << "Главное меню: " << std::endl;
	return show_menu(current);
}

const zlata::MenuItem* zlata::show_second_menu(const MenuItem* current) {
	std::cout << "Второй уровень меню: " << std::endl;
	return show_menu(current);
}

const zlata::MenuItem* zlata::show_third_menu(const MenuItem* current) {
	std::cout << "Третий уровень Русские художники: " << std::endl;
	return show_menu(current);
}

const zlata::MenuItem* zlata::exit(const MenuItem* current) {
	std::exit(0); 
}

const zlata::MenuItem* zlata::art(const MenuItem* current) {
	// TODO
	std::cout << current->title << std::endl << std::endl;
	return current->parent;
}

const zlata::MenuItem* zlata::music(const MenuItem* current) {
	// TODO
	std::cout << current->title << std::endl << std::endl << std::endl;
	return current->parent;
	
}

const zlata::MenuItem* zlata::russian_art_go_back(const MenuItem* current) {
	// TODO
	std::cout << current->title << std::endl << std::endl;
	return current->parent->parent;
}

const zlata::MenuItem* zlata::art_rublev(const MenuItem* current) {
	// TODO
	std::cout << current->title << std::endl << std::endl;
	return current->parent;
}

const zlata::MenuItem* zlata::art_polenov(const MenuItem* current) {
	// TODO
	std::cout << current->title << std::endl << std::endl;
	return current->parent;
}

const zlata::MenuItem* zlata::art_aivazovsky(const MenuItem* current) {
	// TODO
	std::cout << current->title << std::endl << std::endl;
	return current->parent;
}

const zlata::MenuItem* zlata::art_go_back(const MenuItem* current) {
	// TODO
	std::cout << current->title << std::endl << std::endl;
	return current->parent->parent;
}
