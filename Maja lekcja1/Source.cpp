#include <iostream>

using namespace std;

// Zrob program ktory po wczytaniu liczby n wyswietli wszystkie liczby wczytane na ekran

int main()
{
	int n; // wczytana liczba

	cin >> n; // wczyczuje liczbe do zmiennej n

	for (int i = 0; i < n; ++i)
	{
		cout << i << endl;
	}

	cout << "Wyswietlam liczby od 2 do 9 wlacznie, czyli <2; 9>" << endl;
	for (int i = 2; i <= 9; ++i)
	{
		cout << i << endl;
	}

	cout << "Wyswietlam liczby <2; 9)" << endl;
	for (int i = 2; i < 9; ++i)
	{
		cout << i << endl;
	}

	return 0;
}