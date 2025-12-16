#include "menu_items.hpp"

#include <cstddef>

#include "menu_functions.hpp"

const zlata::MenuItem zlata::STUDY_SUMM = {
	"1 - Хочу учиться математике", zlata::study_summ, &zlata::STUDY
};
const zlata::MenuItem zlata::STUDY_SUBSTRACT = {
	"2 - Хочу учиться вычитать", zlata::study_substract, &zlata::STUDY
};
const zlata::MenuItem zlata::STUDY_MULTIPLY = {
	"3 - Хочу учиться умножать", zlata::study_multiply, &zlata::STUDY
};
const zlata::MenuItem zlata::STUDY_DIVIDE = {
	"4 - Хочу учиться делить", zlata::study_divide, &zlata::STUDY
};
const zlata::MenuItem zlata::STUDY_GO_BACK = {
	"0 - Лучше отдохну", zlata::study_go_back, &zlata::STUDY
};

namespace {
	const zlata::MenuItem* const study_children[] = {
		&zlata::STUDY_GO_BACK,
		&zlata::STUDY_SUMM,
		&zlata::STUDY_SUBSTRACT,
		&zlata::STUDY_MULTIPLY,
		&zlata::STUDY_DIVIDE
	};
	const int study_size = sizeof(study_children)/ sizeof(study_children[0]);
}

const zlata::MenuItem zlata::STUDY = {
	"1 - Хочу учиться математике", zlata::show_menu, &zlata::MAIN, study_children, study_size
};
const zlata::MenuItem zlata::EXIT = {
	"0 - Лучше отдохну", zlata::exit, &zlata::MAIN
};

namespace {
	const zlata::MenuItem* const main_children[] = {
		&zlata::EXIT,
		&zlata::STUDY
	};
	const int main_size = sizeof(main_children)/sizeof(main_children[0]);
}

const zlata::MenuItem zlata::MAIN = {
	nullptr, zlata::show_menu, nullptr, main_children, main_size
};

		