#include <iostream>
using namespace std;

int main()
{
	int n;
	int x;
	cin >> n >> x;
	int* a = new int[n];
	for (int i = 0;i < n;i++)
	{
		int b;
		cin >> b;
		a[i] = b;
	}
	for (int i = 0;i < n;i++)
	{
		if (a[i] < x)
		{
			cout << a[i] << " ";
		}
	}
}