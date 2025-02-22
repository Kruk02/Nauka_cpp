#include <iostream>
using namespace std;
void pole(float a, float b);
void obw(float a, float b);
void poleKola(float a);
void obwodKola(float a);
void menu();
int main()
{
	float a, b;
	int wybor;
	do {
		menu();
		cin >> wybor;
		switch (wybor) {
		case 0: return 0;
		case 1:
			cout << "Podaj dlugosc boku a : ";
			cin >> a;
			cout << "Podaj dlugosc boku b : ";
			cin >> b;
			pole(a, b);
			break;
		case 2:
			cout << "Podaj dlugosc boku a : ";
			cin >> a;
			cout << "Podaj dlugosc boku b : ";
			cin >> b;
			obw(a, b);
			break;
		case 3:
			cout << "Podaj promien : ";
			cin >> a;
			poleKola(a);
			break;
		case 4:
			cout << "Podaj promien : ";
			cin >> a;
			obwodKola(a);
			break;
		}
	} while (wybor != 0);
}
void menu() {
	cout << "\nKalkulator pola i obwodu";
	cout << "\n1. Pole rownolegloboku \n2. Obwod rownolegloboku";
	cout << "\n3. Pole kola \n4. Obwod kola \n0. Koniec";
	cout << "\nWybor : ";
}
void pole(float a, float b) {
	float wynik;
	wynik = a * b;
	cout << "Pole : " << wynik << endl;
}
void obw(float a, float b) {
	float wynik;
	wynik = 2 * a + 2 * b;
	cout << "Obwod : " << wynik << endl;
}
void poleKola(float a) {
	float wynik;
	const float pi = 3.14159;
	wynik = pi * a;
	cout << "Pole koła : " << wynik << endl;
}
void obwodKola(float a) {
	float wynik;
	const float pi = 3.14159;
	wynik = 2 * pi * a;
	cout << "Obwod kola o promieniu " << a << " : " << wynik << endl;
}