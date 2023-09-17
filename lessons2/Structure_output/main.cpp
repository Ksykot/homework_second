#include <iostream>
#include <Windows.h>

struct address {
	std::string city;
	std::string street;
	int house_number;
	int apartament_number;
	int index;
};

void address_information(address home) {
	setlocale(LC_ALL, "Russian");
	std::cout << "�����:" << home.city << std::endl;
	std::cout << "�����:" << home.street << std::endl;
	std::cout << "����� ����:" << home.house_number << std::endl;
	std::cout << "����� ��������:" << home.apartament_number << std::endl;
	std::cout << "������:" << home.index << std::endl;
}


int main() {
	setlocale(LC_ALL, "Russian");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	std::cout << "������� �����, �����, ����� ���� � ��������, ������ (����� ������� ����� ������� Enter): " << std::endl;
	address home;

	std::string city;
	std::cin >> city;
	home.city = city;

	std::string street;
	std::cin >> street;
	home.street = street;

	int house_number = 0;
	std::cin >> house_number;
	home.house_number = house_number;

	int apartament_number = 0;
	std::cin >> apartament_number;
	home.apartament_number = apartament_number;

	int index = 0;
	std::cin >> index;
	home.index = index;


	address_information(home);
}