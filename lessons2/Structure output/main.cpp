#include <iostream>

struct address {
	char city;
	char street;
	int house_number;
	int apartament_number;
	int index;
};

void address_information(char c, char s, int h_n, int a_n, int i) {
	std::cout << "Город: " << c;
	std::cout << "Улица: " << s;
	std::cout << "Номер дома: " << h_n;
	std::cout << "Номер квартиры: " << a_n;
	std::cout << "Индекс: " << i;
}


int main() {
	char c;
	char s;
	int h_n, a_n, i;

	address* address_array = new address[10];
	address_array[0].city = c;
	address_array[0].street = s;
	address_array[0].house_number = h_n;
	address_array[0].apartament_number = a_n;
	address_array[0].index = i;

	std::cout << " Введите город, улицу, номер дома, номре квартиры, индекс: " << std::endl;
	std::cin >> c;
	std::cin >> s;
	std::cin >> h_n;
	std::cin >> a_n;
	std::cin >> i;

	address_information(c, s, h_n, a_n, i);
}