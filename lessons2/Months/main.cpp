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
	do {
		std::cout << "������� ����� ������: ";
		std::cin >> month_number;
		switch (month_number) {
		case January:
			std::cout << "������" << std::endl ;
			break;
		case February:
			std::cout << "�������" << std::endl;
			break;
		case March:
			std::cout << "����" << std::endl;
			break;
		case April:
			std::cout << "������" << std::endl;
			break;
		case May:
			std::cout << "���" << std::endl;
			break;
		case June:
			std::cout << "����" << std::endl;
			break;
		case Jule:
			std::cout << "����" << std::endl;
			break;
		case August:
			std::cout << "������" << std::endl;
			break;
		case September:
			std::cout << "��������" << std::endl;
			break;
		case October:
			std::cout << "�������" << std::endl;
			break;
		case November:
			std::cout << "������" << std::endl;
			break;
		case December:
			std::cout << "�������" << std::endl;
			break;
		}

		if (month_number > 12) {
			std::cout << "������������ �����!" << std::endl;
		}
		else  if (month_number == 0) {
			std::cout << "�� ��������!" << std::endl;
		}

	} while (month_number != 0);

}