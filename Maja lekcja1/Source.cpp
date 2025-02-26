#include <iostream>

using namespace std;

// Zrob program ktory po wczytaniu liczby n wyswietli wszystkie liczby wczytane na ekran

int main()
{
	int n; //deklaracja liczby calkowitej
	cout << "Podaj ilosc liczb calkowitych ";
	cin >> n;
	int tab[n];

	for (int i = 0; i < n; ++i)
	{
		cin >> tab[i];
	}
	tab[0]=123456;

	return 0;
}