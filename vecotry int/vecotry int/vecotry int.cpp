﻿#include <iostream>
#include <vector>
using namespace std;
int main() {
	vector<int> liczby;
	int koniec = 0;
	int wybor;
	int num;
	do {
		cout << "\n1. Dodaj liczbe \n2. Podaj ilosc elementow \n3. Wypisz wszystko \n4. Koniec";
		cout << "\nWybor: ";
		cin >> wybor;

		switch (wybor) {
		case 1:
			cout << "Podaj liczbe: ";
			cin >> num;
			liczby.push_back(num);
			break;
		case 2:
			cout << "\nLiczba elementow to " << liczby.size() << endl;
			break;
		case 3:
			cout << "Element nr. :";
			for (int i = 0;i < liczby.size(); i++) {
				cout << "\t" << i + 1 << ".";
			}
			cout << endl;
			cout << "Zawartosc :";
			for (int i = 0;i < liczby.size(); i++) {
				cout << "\t" << liczby[i] << " ";
			}
			cout << "\n\n\n";
			break;
		case 4:
			koniec = 1;
			break;
		}
	} while (koniec == 0);
	cout << "Koniec programu dziala";
	return 0;
}