#include <iostream>
#include <string>


struct person {
	int account_number;
	std::string person_name;
	int balance;
	int new_balance;
	std::string account;
};

void change_balance(person& ba, int new_balance) {
	
}

int main(int argc, char** argv) {

  setlocale(LC_ALL, "Russian");

  int a_n;
  std::string name;
  int b;
  person ba;
  int new_balance = 0;
 
 
    std::cout << " ������� ����� �����: ";
	std::cin >> a_n;
	std::cout << " ������� ��� ���������: ";
	std::cin >> name;
	std::cout << "������� ������: ";
	std::cin >> b;
	std::cout << "������� ����� ������: ";
	std::cin >> new_balance;
	std::cout << "��� ����: " << name << ", " << a_n << ", " << new_balance << std::endl;;

}