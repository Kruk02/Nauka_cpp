#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
	srand(time(NULL));
	int traf, n = 0;
	int losowa = (rand() % 100 + 1);
	do {
		cout << "\n Zgadnij liczbe : ";
		cin >> traf;
		n++;
		if (traf == losowa) {
			cout << "\n Poprawna\n Ilosc prob : " << n;
			return 0;
		}
		else if (traf < losowa) {
			cout << "\n Za malo";
		}
		else if (traf > losowa) {
			cout << "\n Za duzo";
		}
	} while (1);
	return 0;
}