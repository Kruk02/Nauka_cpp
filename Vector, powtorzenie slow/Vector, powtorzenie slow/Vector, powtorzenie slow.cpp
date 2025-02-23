﻿#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	cout << "Podaj liczbe slow, nastepnie wypisz je, a na koncu \noblicze, ile razy wystapilo wybrane przez Ciebie slowo.";
	cout << "\nPodaj liczbe slow: ";
	int num1;
	cin >> num1;
	vector<string>slowa;
	string slowo;
	for (int i = 0; i < num1; i++) {
		cout << "(" << i + 1 << " z " << num1 << ")" << "Podaj slowo: ";
		cin >> slowo;
		slowa.push_back(slowo);
	}
	cout << "\nPodaj jeszcze jedno dodatkowe slowo: ";
	cin >> slowo;
	slowa.push_back(slowo);
	cout << "Twoje slowa: ";
	for (int i = 0;i < slowa.size();i++) {
		cout << slowa[i];
		if (i != slowa.size() - 1) {
			cout << ", ";
		}
	}
	cout << "\nJakie slowo chcesz policzyc?";
	cout << "\nWybor: ";
	string wybor;
	cin >> wybor;
	int ile = count(slowa.begin(), slowa.end(), wybor);
	cout << "\nSlowo '" << wybor << "' wystepuje " << ile << " razy";
	return 0;
}
