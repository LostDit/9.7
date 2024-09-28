#include <iostream>
#include <string>
using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	std::string departure, arrival, conversion1, conversion2, conversion3, conversion4;
	bool chek = false, out = false;
	while (true) {
		system("cls");
		if (chek == true) { std::cout << "Ошибка! Введите ещё раз\n "; chek = false; }
		std::cout << "Введите время отбытия поезда (HH:MM): ";
		getline(std::cin, departure);
		while (true) {
			if (departure[2] != ':' || departure.length() > 5) {
				chek = true;
				break;
			}else if (departure[0] > '2' || departure[0] < '0') {
				chek = true;
				break;
			}else if (departure[0] == '2' && departure[1]>'3' || departure[1] < '0') {
				chek = true;
				break;
			}else if (departure[3] > '5' || departure[3] < '0') {
				chek = true;
				break;
			}else if (departure[4] > '9' || departure[4] < '0') {
				chek = true;
				break;
			}else { out = true; break; }
		}if (out == true) { break; }
	}
	out = false;
	while (true) {
		system("cls");
		if (chek == true) { std::cout << "Ошибка! Введите ещё раз\n "; chek = false; }
		std::cout << "Введите время прибытия поезда (HH:MM): ";
		getline(std::cin, arrival);
		while (true) {
			if (arrival[2] != ':' || arrival.length() > 5) {
				chek = true;
				break;
			}else if (arrival[0] > '2' || arrival[0] < '0') {
				chek = true;
				break;
			}else if (arrival[0] == '2' && arrival[1] > '3' || arrival[1] < '0') {
				chek = true;
				break;
			}else if (arrival[3] > '5' || arrival[3] < '0') {
				chek = true;
				break;
			}else if (arrival[4] > '9' || arrival[4] < '0') {
				chek = true;
				break;
			}else { out = true; break; }
		}if (out == true) { break; }
	}
	int hours, hours1, minutes, minutes1,h,m;
	
	conversion1 = { departure[0],departure[1] };	hours = stoi(conversion1);
	conversion2 = { departure[3],departure[4] };	minutes = stoi(conversion2);

	conversion3 = { arrival[0],arrival[1] };	hours1 = stoi(conversion3);
	conversion4 = { arrival[3],arrival[4] };	minutes1 = stoi(conversion4);
		
		if (hours > hours1) {
			for (h = 0; hours < 24; hours++) {
				h++;
			}h += hours1;
			if (minutes == 0 && minutes1 == 59) {
				m = minutes1;
				std::cout <<"Поездка составила: "<<h<<" ч."<<m<<" м.";
			}
			else if (minutes > 0 && minutes1 == 59) {
				m = minutes1 - minutes;
				std::cout << "Поездка составила: " << h << " ч." << m << " м.";
			}
			else if(minutes>minutes1){
				m = 60 - minutes;
				std::cout << "Поездка составила: " << h << " ч." << m << " м.";
			}
			else {
				m = 60 - minutes1;
				std::cout << "Поездка составила: " << h << " ч." << m << " м.";
			}
		}
		else {
			h = hours1 - hours;
			if (minutes > minutes1) {
				m = minutes - minutes1;
				std::cout << "Поездка составила: " << h << " ч." << m << " м.";
			}
			else {
				m = minutes1 - minutes;
				std::cout << "Поездка составила: " << h << " ч." << m << " м.";
			}
		}


	
}
