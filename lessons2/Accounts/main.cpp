#include <iostream>
#include <string>


struct person {
	std::string account_number;
	std::string person_name;
	std::string balance;
	std::string new_balance;
	std::string account;
};

void balance(person& b, person& n_b) {
	
}

int main(int argc, char** argv) {

  setlocale(LC_ALL, "Russian");

  int a_n;
  person ac_nu;
  char name;
  person na;
  int b;
  person ba;
  int n_b;
  person ne_ba;
  int a;
  person ac;

    std::cout << " ������� ����� �����: ";
    std::cin >> a_n;
	std::cout << std::endl;
	std::cout << " ������� ��� ���������: ";
	std::cin >> name;
	std::cout << std::endl;
	std::cout << "������� ������: ";
	std::cin >> b;
	std::cout << std::endl;
	std::cout << "������� ����� ������: ";
	std::cin >> n_b;
	std::cout << std::endl;
	std::cout << "��� ����: " << name << a_n << n_b << std::endl;;

}