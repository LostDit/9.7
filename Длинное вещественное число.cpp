/*Использован строковый тип данных для считывания чисел.
Решение на примерах из условия выдаёт правильный результат.*/

#include <iostream>
#include <string>
using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	string stroka;
	bool chek=true,final = true;
	while (final) {
		int a = 0, b = 0, c = 0;
		chek == false? std::cout << "Ошибка при вводе, попробуйте ещё раз: ": std::cout << "Введите вещественное число: ";chek = true;
		getline(std::cin, stroka);
		while (chek) {
			if (stroka[0] == '.' || stroka[0] == '-' || (stroka[0] <= '9' && stroka[0] >= '0')) {
				for (int i = 0; i != stroka.length();i++) {
					if (stroka[i] == '.') { b++; }
					if (stroka[i] == '9' || stroka[i] == '8' || stroka[i] == '7' || stroka[i] == '6' || stroka[i] == '5' || stroka[i] == '4' || stroka[i] == '3' || stroka[i] == '2' || stroka[i] == '1' || stroka[i] == '0') { 
						a++; 
					}else { 
						if (stroka[i] == '.' || stroka[i] == '-' || stroka[i] == '9' || stroka[i] == '8' || stroka[i] == '7' || stroka[i] == '6' || stroka[i] == '5' || stroka[i] == '4' || stroka[i] == '3' || stroka[i] == '2' || stroka[i] == '1' || stroka[i] == '0') {}else { c++; }
					}
				}if (a == 0) { 
					chek = false; 
				}else if (b == 2) { 
					chek = false; 
				}
				else if (c > 0) {
					chek = false;
				}else {
					chek = false;
					final = false;
				}
			}
			else {
				chek = false;
			}
		}
	}
	system("cls");
	std::cout << "Всё ок (>*.*>)\n";
}
