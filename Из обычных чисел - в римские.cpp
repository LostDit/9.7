/*Программа выдаёт в результате единственно правильный вариант представления в римской записи. - Сам результат

Римскую запись числа можно получить, если следовать правилам:
Сначала в ней идут буквы, обозначающие количество тысяч в числе. 
Затем идут буквы, обозначающие количество сотен, затем буквы, обозначающие количество десятков, и в конце — буквы, обозначающие количество единиц. 
Для записи используются следующие буквы: 1 — I, 5 — V, 10 — X, 50 — L, 100 — C, 500 — D и 1000 — M. 
Число получается как сумма значений использованных в нём букв, за тем исключением, что если буква с меньшим значением идёт перед буквой с большим значением, то её значение вычитается из значения числа. 
Вычитание используется, только когда надо передать цифру 4 или 9, в остальных случаях используется сложение. Например, 9 обозначается как IX, 40 — как XL. 
В числе запрещено писать более трёх одинаковых букв подряд. Таким образом, максимальное число, которое можно записать по этим правилам, — 3999.
*/
﻿#include <iostream>
#include <string>

int main() {
	setlocale(LC_ALL, "Russian");
	std::string stroka;
	
	std::cout << "Ввод: ";
	getline(std::cin, stroka);

	
	//MMMDCCCCLXXXXVIIII - максимальное число
}
