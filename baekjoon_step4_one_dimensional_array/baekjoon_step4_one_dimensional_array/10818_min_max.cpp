#include <iostream>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int n;
	cin >> n;
	int* a = new int[n];
	for (int i = 0;i < n;i++)
	{
		int b;
		cin >> b;
		a[i] = b;
	}
	
	/*
	for (int i = 0;i < n - 1;i++)
	{
		for (int j = 0; j < n - i - 1;j++)
		{
			if (a[j] > a[j + 1])
			{
				int temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
			}
		}
	}

	int min = a[0];
	int max = a[n - 1];
	cout << min << " " << max;
	*/

	

}