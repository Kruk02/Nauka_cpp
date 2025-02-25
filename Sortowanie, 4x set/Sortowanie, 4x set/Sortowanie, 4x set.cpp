#include <iostream>
#include <set>
using namespace std;
void sortuj(set<int>& s1, set<int>& s2, set<int>& wspolne, set<int>& pierwszy);
int main()
{
	set <int> s1, s2, wspolne, pierwszy;

	cout << "Pierwszy zestaw liczb\n";
	cout << "Podaj ile liczb: ";
	int nliczb1;
	cin >> nliczb1;
	int bufor;
	for (int i = 0; i < nliczb1; i++) {
		cout << "(" << i + 1 << " z " << nliczb1 << ") : ";
		cin >> bufor;
		s1.insert(bufor);
	}

	cout << "\nDrugi zestaw liczb\n";
	cout << "Podaj ile liczb: ";
	int nliczb2;
	cin >> nliczb2;
	for (int i = 0; i < nliczb2; i++) {
		cout << "(" << i + 1 << " z " << nliczb2 << ") : ";
		cin >> bufor;
		s2.insert(bufor);
	}
	sortuj(s1, s2, wspolne, pierwszy);
	cout << "\nLiczby wspolne: ";
	for (int x : wspolne) cout << x << " ";

	cout << "\nLiczby tylko w pierwszym zbiorze: ";
	for (int x : pierwszy)  cout << x << " ";
	cout << "\n\n\n\n";

	return 1;
}
void sortuj(set<int>& s1, set<int>& s2, set<int>& wspolne, set<int>& pierwszy) {
	for (int x : s1) {
		if (s2.count(x)) {
			wspolne.insert(x);
		}
		else pierwszy.insert(x);
	}
}
