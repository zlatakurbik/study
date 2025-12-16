#include <cmath>
#include <iostream>

int main() { 
	int day, month, year;
	std::cout << "Введите, пожалуйста, номер дня: " << std::endl;
	std::cin >> day;
	std::cout << "Введите, пожалуйста, номер месяца: " << std::endl;
	std::cin >> month;
	std::cout << "Введите, пожалуйста, номер года: " << std::endl;
	std::cin >> year;
	
	int centure_year = year % 100;
	int centure = year / 100;
	int week_day = (
		day 
		+ (13 * month -1) / 5 
		+ y / 4 
		+ centure / 4 
		- 2 * centure 
		+ 777
	) % 7;
	
	std::cout << "День недели это ";
	switch(week_day){
		case == 0 :
			std::cout << "Воскресенье" << std::endl;
			break;
		case == 1 :
			std::cout << "Понедельник" << std::endl;
			break;
		case == 2 :
			std::cout << "Вторник" << std::endl;
			break;
		case == 3 :
			std::cout << "Среда" << std::endl;
			break;
		case == 4 :
			std::cout << "Четверг" << std::endl;
			break;
		case == 5 :
			std::cout << "Пятница" << std::endl;
			break;
		case == 6 :
			std::cout << "Суббота" << std::endl;
			break;
		default :
			std::cout << "Неверный номер дня недели" <<std::endl;
			break;
	}

	return 0;
}
