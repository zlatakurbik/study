#include "menu_items.hpp"

#include <cstddef> 

#include "menu_functions.hpp"

const zlata::MenuItem zlata::ART_RUBLEV = {
	"1 - Андрей Иванов сын Рублёв", zlata::art_rublev, &zlata::ART
};

const zlata::MenuItem zlata::ART_POLENOV = {
	"2 - Василий Дмитриевич Поленов", zlata::art_polenov, &zlata::ART
};

const zlata::MenuItem zlata::ART_AIVAZOVSKY = {
	"3 - Иван Константинович Айвазовский", zlata::art_aivazovsky, &zlata::ART
};

const zlata::MenuItem zlata::ART_GO_BACK = {
	"0 - Выйти в предыдущее меню ", zlata::art_go_back, &zlata::ART
};

namespace {
	const zlata::MenuItem* const art_children[] = {
		&zlata::ART_GO_BACK,
		&zlata::ART_RUBLEV,
		&zlata::ART_POLENOV,
		&zlata::ART_AIVAZOVSKY
	};
	const int art_size = sizeof(art_children) / sizeof(art_children[0]);
}


const zlata::MenuItem zlata::ART = {
	"1 - Русские художники", zlata::show_third_menu, &zlata::RUSSIAN_ART, art_children, art_size
};

const zlata::MenuItem zlata::MUSIC = {
	"2 - Русские музыканты", zlata::music, &zlata::RUSSIAN_ART
};

const zlata::MenuItem zlata::RUSSIAN_ART_GO_BACK = {
	"0 - Выйти в главное меню", zlata::russian_art_go_back, &zlata::RUSSIAN_ART
};

namespace {
	const zlata::MenuItem* const russian_art_children[] = {
		&zlata::RUSSIAN_ART_GO_BACK,
		&zlata::ART,
		&zlata::MUSIC,
	};
	const int russian_art_size = sizeof(russian_art_children)/ sizeof(russian_art_children[0]);
}

const zlata::MenuItem zlata::RUSSIAN_ART = {
	"1 - Искусство России", zlata::show_second_menu, &zlata::MAIN, russian_art_children, russian_art_size
};
const zlata::MenuItem zlata::EXIT = {
	"0 - Выйти", zlata::exit, &zlata::MAIN
};

namespace {
	const zlata::MenuItem* const main_children[] = {
		&zlata::EXIT,
		&zlata::RUSSIAN_ART
	};
	const int main_size = sizeof(main_children)/sizeof(main_children[0]);
}

const zlata::MenuItem zlata::MAIN = {
	nullptr, zlata::show_main_menu, nullptr, main_children, main_size
};

const zlata::MenuItem zlata::MAIN_MENU = {
	nullptr, zlata::show_main_menu, nullptr, main_children, main_size
};

const zlata::MenuItem zlata::SECOND_MENU = {
	nullptr, zlata::show_second_menu, nullptr, main_children, main_size
};

const zlata::MenuItem zlata::THIRD_MENU = {
	nullptr, zlata::show_third_menu, nullptr, main_children, main_size
};