/*
Использован строковый тип данных для считывания чисел.
Решение на примерах из условия выдаёт правильный результат.
*/
#include <iostream>
#include <string>
using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	string stroka1, stroka2;
	int b = 0, c = 0,a=0;
	bool chek = true;
	
	while (chek)	{
		system("cls");
		chek == true&&a<1? std::cout << "Введите задуманное число: ":std::cout<<"Ошибка! Введите задуманное число: ";
		getline(std::cin, stroka1);
		for (int i = 0; i < stroka1.length();i++) {
			if (stroka1[i] < '0' || stroka1[i]>'9') {
				chek = true;
			}else { chek = false; }
		}
		if (chek == false && stroka1.length() == 4) {
			chek = false;
		}else {
			chek = true;
		}
		a++;
	}
	a = 0; chek = true;
	while (chek) {
		system("cls");
		chek == true && a < 1 ? std::cout << "Введите второе число: " : std::cout << "Ошибка! Введите второе число: ";
		getline(std::cin, stroka2);
		for (int i = 0; i < stroka2.length(); i++) {
			if (stroka2[i] < '0' || stroka2[i]>'9') {
				chek = true;
			}
			else { chek = false; }
		}
		if (chek == false && stroka2.length() == 4) {
			chek = false;
		}else {
			chek = true;
		}
		a++;
	}
	
	for (int i = 0; i < 4; i++) {
		for (int g = 0; g < 4; g++) {
			if (stroka1[i] == stroka2[i]) {
				b++;
				break;
			}if (stroka1[i] == stroka2[g]) {
				c++;
				break;
			}
		}
	}
	system("cls");
	std::cout << "Задуманное число: " << stroka1 << " Второе число: " << stroka2;
	std::cout << "\n";
	std::cout << "Быков: " << b << " Коров: " << c;
}