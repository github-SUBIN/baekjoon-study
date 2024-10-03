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
		if (i != j)
		{
			for (int b = i - 1;b <= (i+j)/2 - 1;b++)
			{
				int temp;
				temp = basket[j - 1 - b];
				basket[j - 1 - b] = basket[b];
				basket[b] = temp;
			}
			for (int c = 0;c < n;c++)
			{
				cout << basket[c] << " ";
			}
			cout << endl;
		}
		
		/*
		for (int c = 0;c < n;c++)
		{
			cout << basket[c] << " ";
		}
		*/
	}

	cout << endl;
	for (int a = 0;a < n;a++)
	{
		cout << basket[a] << " ";
	}
}