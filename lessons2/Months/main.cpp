#include <iostream>

enum months {
	January = 1,
		February = 2,
		March = 3,
		April = 4,
		May = 5,
		June = 6,
		Jule = 7,
		August = 8,
		September = 9,
		October = 10,
		November = 11,
		December = 12
};
int main() {
	setlocale(LC_ALL, "Russian");

	int month_number;
	int number;
	do {
		std::cout << "Введите номер месяца: ";
		std::cin >> month_number;
		if (month_number > 12) {
			std::cout << "Неправильный номер!" << std::endl;
		}
		if (month_number < 12 || month_number == 12 && month_number > 1 || month_number == 1 ) {
			months month= static_cast<months>(number);
			std::cout << static_cast<char>(month);
			std::cout << std::endl;
		}
		if (month_number == 0) {
			std::cout << "До свидания!" << std::endl;
		}
	} while (month_number != 0);

}