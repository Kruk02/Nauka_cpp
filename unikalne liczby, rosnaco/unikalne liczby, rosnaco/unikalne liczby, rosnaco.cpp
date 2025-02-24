#include <iostream>
#include <set>
#include <vector>
using namespace std;
int main()
{
    vector<int>liczby;
    set<int> unikalne, powotrzone;
    bool koniec = false;
    char czy_koniec;
    int counter = 0;
    int counter_powt = 0;
    do {
        cout << "Podaj liczbe: ";
        int bufor;
        cin >> bufor;
        liczby.push_back(bufor);
        counter++;
        do{ 
            cout << "\n (t / n) Czy koniec?: ";
            cin >> czy_koniec;
            if (czy_koniec == 't') koniec = true;
            else if (czy_koniec == 'n') koniec = false;
            else cout << "Nieprawidlowa wartosc, uzyj 't' dla tak i 'n' dla nie";
        } while (czy_koniec != 'n' && czy_koniec != 't'); // czy kontynuuowac petla

        switch (koniec) {
        case 't': koniec = true; break;
        case 'n': koniec = false; break;
        } 
    } while (koniec == false);

    cout << "Wpisane liczby: ";
    for (int x : liczby) {
        cout << x << " ";
}

    for (int x : liczby) {
        if (unikalne.count(x)) {
            powotrzone.insert(x);
            counter_powt++;
        }
        else unikalne.insert(x);
    }

    cout << "\nTo jest : " << counter << " liczb\n";
    cout << "Powtorzylo sie " << counter_powt << " liczb\n";
    
    cout << "\nUnikalne liczby : ";
    for (int x : unikalne) {
        cout << x << " ";
    }
    cout << "\nPowtorzone liczby : ";
    for (int x : powotrzone) {
        cout << x << " ";
    }


    return 0;
}
