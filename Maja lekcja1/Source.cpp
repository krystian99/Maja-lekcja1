#include <iostream>

using namespace std;

const int MAX = 1001;
int tab[MAX];

// Zrob program ktory po wczytaniu liczby n wyswietli wszystkie liczby wczytane na ekran

int main()
{
	int n; //deklaracja liczby calkowitej
	cout << "Podaj ilosc liczb calkowitych ";
	cin >> n;
	//int tab[n];

	// wczytanie do tablicy
	for (int i = 0; i < n; ++i)
	{
		cin >> tab[i];
	}

	// petla for, klamry, kolejne kroki petli

	for(int i= 0; i < n; ++i)
	{
		cout << tab[i] << endl;
	}



	tab[0]=123456;

	return 0;
}