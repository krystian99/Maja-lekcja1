#include <iostream>
#include <cstdlib>
using namespace std;



int main()
{
	
	srand(time(NULL));
	int n;
	cin >> n;

	for (int i = 0; i < n; ++i)
	{
		int a = rand();
		cout << a << endl;
	}
	return 0;
}