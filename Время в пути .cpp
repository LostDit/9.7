//Программа корректно считает и время в течение суток, и время поездки с прибытием на следующий день.
//Обеспечен контроль ввода и по длине строк, и по вводимым символам.

#include <iostream>
#include <string>

int main() {
	setlocale(LC_ALL, "Russian");
	std::string stroka1,stroka2, conversion1,conversion2,conversion3,conversion4;
	bool chek = true,out =true;
	
	while (out) {

		system("cls");
		chek == false ? std::cout << "Ошибка! Введите ещё раз время отправления (HH:MM): " : std::cout << "Введите время отправления (HH:MM): "; chek = true;
		getline(std::cin, stroka1);

		if (stroka1.length() != 5) {
			chek = false;
		}else if (stroka1[0] < '0' || stroka1[0]>'9') {
			chek = false;
		}else if (stroka1[1] < '0' || stroka1[1]>'9') {
			chek = false;
		}else if (stroka1[2] != ':') {
			chek = false;
		}else if (stroka1[3] < '0' || stroka1[3]>'9') {
			chek = false;
		}else if (stroka1[4] < '0' || stroka1[4]>'9') {
			chek = false;
		}else {
			out = false;
		}

	}
	
	out = true;
	
	while (out) {

		system("cls");
		chek == false ? std::cout << "Ошибка! Введите ещё раз время прибытия (HH:MM): " : std::cout << "Введите время прибытия (HH:MM): "; chek = true;
		getline(std::cin, stroka2);

		if (stroka2.length() != 5) {
			chek = false;
		}else if (stroka2[0] < '0' || stroka2[0]>'9') {
			chek = false;
		}else if (stroka2[1] < '0' || stroka2[1]>'9') {
			chek = false;
		}else if (stroka2[2] != ':') {
			chek = false;
		}else if (stroka2[3] < '0' || stroka2[3]>'9') {
			chek = false;
		}else if (stroka2[4] < '0' || stroka2[4]>'9') {
			chek = false;
		}else {
			out = false;
		}

	}
	
	int hours, hours1, minutes, minutes1, h, h1;
	conversion1 = { stroka1[0],stroka1[1] };	hours = stoi(conversion1); conversion3 = { stroka2[0],stroka2[1] };	hours1 = stoi(conversion3);
	conversion2 = { stroka1[3],stroka1[4] };	minutes = stoi(conversion2); conversion4 = { stroka2[3],stroka2[4] };	minutes1 = stoi(conversion4);
	
	h = hours * 60 + minutes;
	h1 = hours1 * 60 + minutes1;
	std::cout << (h > h1 ? "Поездка составила " + std::to_string((24 * 60 - h + h1) / 60) + "ч. " + std::to_string((24 * 60 - h + h1) % 60) + "м.\n" : "Поездка составила " + std::to_string((h1 - h) / 60) + "ч. " + std::to_string((h1 - h) % 60) + "м.\n");

}
