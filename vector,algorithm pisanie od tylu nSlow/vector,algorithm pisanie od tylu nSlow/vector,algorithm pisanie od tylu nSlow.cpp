#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	vector<string> slowa;
	cout << "\n Podaj liczbe slow: ";
	int nSlow;
	cin >> nSlow;

	for (size_t i = 0; i < nSlow; i++) {
		cout << "(" << i + 1 << " z " << nSlow << ") Podaj slowo: ";
		string slowo;
		cin >> slowo;
		slowa.push_back(slowo);
	}
	cout << "\n\n";
	for (size_t i = 0; i < nSlow; i++) {
		cout << "\t" << slowa[i] << " ";
	}
	cout << "\n\n";
	cout << "\nOd tylu: \t";
	reverse(slowa.begin(), slowa.end());
	for (size_t i = 0; i < nSlow; i++) {
		cout << slowa[i] << " ";
	}
	cout << "\n\n";

	return 0;
}