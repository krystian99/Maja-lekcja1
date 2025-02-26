#include <iostream>

using namespace std;

// Zrob program ktory po wczytaniu liczby n wyswietli wszystkie liczby wczytane na ekran

const int N = 1001; // maksymalna liczba elementów

int main()
{
	int n;

	cout << " Podaj ilosc liczb calkowitych ";
	cin >> n;

	int tab[N] = {};

	// wczytywanie danych do tablicy
	for (int i = 0; i < n; ++i)
	{
		cin >> tab[i];
	}

	// wyswietlanie elementow tablicy

	for (int i = 0; i < n; ++i)
	{
		cout << tab[i] << " ";
	}
	return 0;
}