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
		case 1:
			std::cout << static_cast<char>(months::January);
			break;
		case 2:
			std::cout << "�������" << std::endl;
			break;
		case 3:
			std::cout << "����" << std::endl;
			break;
		case 4:
			std::cout << "������" << std::endl;
			break;
		case 5:
			std::cout << "���" << std::endl;
			break;
		case 6:
			std::cout << "����" << std::endl;
			break;
		case 7:
			std::cout << "����" << std::endl;
			break;
		case 8:
			std::cout << "������" << std::endl;
			break;
		case 9:
			std::cout << "��������" << std::endl;
			break;
		case 10:
			std::cout << "�������" << std::endl;
			break;
		case 11:
			std::cout << "������" << std::endl;
			break;
		case 12:
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