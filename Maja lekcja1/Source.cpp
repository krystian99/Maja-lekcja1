#include <iostream>

using namespace std;

// Zrob program ktory po wczytaniu liczby n wyswietli wszystkie liczby wczytane na ekran

int main()
{
	int n;

	cout << " Podaj ilosc liczb calkowitych ";
	cin >> n;
	
	cout << "Wypisuje wczytana liczbe: " << n << endl;

	int tab[5] = {};

	tab[2] = 12;
	tab[3] = 8;

	// wyswietlanie pojedynczo
	cout << tab[1] << endl;
	cout << tab[2] << endl;

	for (int i = 0; i < n; ++i)
	{
		cout << tab[i] << endl;
	}

	return 0;
}