#include <iostream>

using namespace std;

int main()
{
	cout << "Jestem Krystian. Jestem korepetytorem z informatyki i matematyki" << endl;

	int n; // liczba calkowita o nazwie n
	double x; // liczba zmiennoprzecinkowa(z przecinkami, np. 2,45)


	cout << "Podaj liczbe do wczytania: ";
	cin >> n; // wczytywanie danych do zmiennej n
	cout << "Wyswietlam wczytana liczbe: " << n;

	cout << "Wyswietlam wczytana liczbe pomniejszona o 2: " << n - 2 << endl;

	cout << "Wyswietlam wczytana liczbe podzielona na 2: " << n / 2 << endl;
	cout << "Wyswietlam wczytana liczbe n pomnozona przez 5: " << n * 5 << endl;
	
	cout << "Wyswietlam n + 5" << n + 5 << endl;

	return 0;
}