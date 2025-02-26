#include <iostream>
#include <set>
#include <vector>
using namespace std;

void fliczby(int &nliczb, set<int> &s1);
void fporownaj(int &nliczb, set<int> &s1, set<int>& s2, set <int> &brak);

int main() {
	set <int> s1,s2; // s1 to liczby 1-nlibcz, s2 to liczby uzytkownika
	set <int> brak; // brakujace liczby 
	int nliczb = 0;
	cout << "Podaj ilosc elementow: ";
	cin >> nliczb;
	fliczby(nliczb, s1);

	// Pobieranie liczb od uzytkownika
	int bufor2;
	for (int i = 0; i < nliczb; i++) {
		cout << "(" << i + 1 << " z " << nliczb << "): ";
		cin >> bufor2;
		s2.insert(bufor2);
	}
	fporownaj(nliczb, s1, s2, brak);

	for (int x : brak) {
		cout << "Najmniejsza brakujaca liczba : " << x << " ";
	}

	return 0;
}

void fliczby(int &nliczb, set<int> &s1){
	for (int i = 0; i < nliczb;i++) {
		int bufor = i + 1;
		s1.insert(bufor);
	}
}
void fporownaj(int& nliczb, set<int>& s1, set<int>& s2, set <int> &brak){
	for (int x : s1) {
		if (!s2.count(x)) { 
			brak.insert(x); 
			break; 
		}
	
	}
}
