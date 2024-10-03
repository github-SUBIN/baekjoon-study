#include <iostream>
using namespace std;
int main()
{
	int n, m;
	cin >> n >> m;

	int* basket = new int[n];
	for (int a = 0;a < n;a++)
	{
		basket[a] = 0;
	}

	for (int a = 0;a < m;a++)
	{
		int i, j, k;
		cin >> i >> j >> k;
		for (int b = i-1 ;b <= j-1 ;b++)
		{
			basket[b] = k;
		}

	}
	for (int c = 0;c < n;c++)
	{
		cout << basket[c] << " ";
	}
}