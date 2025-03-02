#include <iostream>

using namespace std;

const int MAX = 1001;
int tab[MAX];

// Zrob program ktory po wczytaniu liczby n wyswietli wszystkie liczby wczytane na ekran

int main()
{
	int n;
	cout << "Podaj ilosc liczb calkowitych";
	cin >> n;
	//int tab[n]
	for (int i = 0;i < n; ++i)
	{
		cin >> tab[i];
	}
	for(int i=0; i <n; ++i)
	{
		cout << tab[i] << " ";
	}


	return 0;
}