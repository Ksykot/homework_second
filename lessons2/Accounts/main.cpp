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

    std::cout << " ¬ведите номер счЄта: ";
    std::cin >> a_n;
	std::cout << std::endl;
	std::cout << " ¬ведите им€ владельца: ";
	std::cin >> name;
	std::cout << std::endl;
	std::cout << "¬ведите баланс: ";
	std::cin >> b;
	std::cout << std::endl;
	std::cout << "¬ведите новый баланс: ";
	std::cin >> n_b;
	std::cout << std::endl;
	std::cout << "¬аш счЄт: " << name << a_n << n_b << std::endl;;

}