#include <iostream>
#include <cstdlib> // biblioteka do losowania liczb

using namespace std;

// Zrob program ktory po wczytaniu liczby n wyswietli wszystkie liczby wczytane na ekran

const int N = 1001; // maksymalna liczba elementów

int main()
{
	int n;


	srand(time(0)); // generator maszyny losuj¹cej
	int a = rand(); // funkcja rand
	
	// petla for, uzycie funkcji rand(), wypisanie po spacjif

	// petfla for, klamry

	for (int i = 0; i < n; ++i)
	{
		int a = rand();
		cout << a << endl;
	}



	// zmieniam jeden z elementow i wyswietlam go
	//tab[0] = 123124;

	//cout << tab[0];

	return 0;
}