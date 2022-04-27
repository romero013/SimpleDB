// Персональный шаблон проекта С++
#include <iostream>
#include "Data.h"

using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	int n;

	database page1 = { "Shoplist"};
	int answer;

	do {
		system("cls");

		cout << "Выберите действие:\n";
		cout << "1. Добавить запись;\n";
		cout << "2. Вывести базу данных;\n";
		cout << "3. Очистить базу данных;\n";
		cout << "4. Завершение работы.\n";
		cout << "Ввод -> ";
		cin >> answer;
		cin.ignore();

		switch (answer) {
		case 1: addNote(page1); break;
		case 2: showDatabase(page1); break;
		case 3: clearNotes(page1); break;
		case 4: cout << "Завершение работы программы..."; break;
		default: cout << "Такой команды не существует!\n"; system("pause");
		}

	} while(answer != 4);


	return 0;
}