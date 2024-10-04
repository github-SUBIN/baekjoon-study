#include <iostream>
using namespace std;
int main()
{
	int n, m;
	cin >> n >> m;
	int* basket = new int[n];
	for (int a = 0;a < n;a++)
	{
		basket[a] = a + 1;
	}

	for (int a = 0;a < m;a++)
	{
		int i, j;
		cin >> i >> j;
		int size = j - i + 1;
		int* sample = new int[size];
		int c = j - 1;
		for (int b = 0;b < size;b++)
		{
			sample[b] = basket[c];
			c--;
		}
		int e = 0;
		for (int d = i - 1;d <= j - 1;d++)
		{
			basket[d] = sample[e];
			e++;
		}
		/*
		for (int f = 0;f < n;f++)
		{
			cout << basket[f] << " ";
		}
		cout << endl;
		*/
	}

	//cout << endl;
	for (int a = 0;a < n;a++)
	{
		cout << basket[a] << " ";
	}
}