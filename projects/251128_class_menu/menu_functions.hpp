#pragma once

#include "menu.hpp"

namespace zlata {
	const MenuItem* show_main_menu(const MenuItem* current);
	const MenuItem* show_second_menu(const MenuItem* current);
	const MenuItem* show_third_menu(const MenuItem* current);
	
	
	const MenuItem* exit(const MenuItem* current);	
	const MenuItem* russian_art(const MenuItem* current);
	
	const MenuItem* art(const MenuItem* current);
	const MenuItem* music(const MenuItem* current);
	const MenuItem* russian_art_go_back(const MenuItem* current);
	
	const MenuItem* art_rublev(const MenuItem* current);
	const MenuItem* art_polenov(const MenuItem* current);
	const MenuItem* art_aivazovsky(const MenuItem* current);
	const MenuItem* art_go_back(const MenuItem* current);
}