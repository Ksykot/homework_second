#include <iostream>
#include <string>


struct person {
	int account_number;
	std::string person_name;
	int balance;
};

int change_balance(person& ba, int new_balance) {
	ba.balance = new_balance ;
	return ba.balance;
}

int main(int argc, char** argv) {

  setlocale(LC_ALL, "Russian");

  person ba;

  int a_n;
  std::string name;
  int b;
  int new_balance = 0;
 
 
    std::cout << "������� ����� �����: ";
	std::cin >> a_n;
	std::cout << "������� ��� ���������: ";
	std::cin >> name;
	std::cout << "������� ������: ";
	std::cin >> b;
	ba.account_number = a_n;
	ba.person_name = name;
	ba.balance = b;
	std::cout << "������� ����� ������: ";
	std::cin >> new_balance;
	change_balance( ba,new_balance);
	std::cout << "��� ����: " << ba.person_name << ", " << ba.account_number << ", " << ba.balance << std::endl;;

}