#include <iostream>
using namespace std;
int main()
{
	int a;
	cin >> a;
	int b = a;
	int n = 1;
	while (b > 0)
	{
		for (int i = b - 1;i > 0;i--)
		{
			cout << " ";
		}
		for (int i = 1;i <= 2 * n - 1;i++)
		{
			cout << "*";
		}
		b--;
		n++;
		cout << endl;
	}
	n = 1;
	b = a-1;
	while (b > 0)
	{
		for (int i = 1;i < n + 1;i++)
		{
			cout << " ";
		}
		for (int i = 1;i <= 2 * b - 1;i++)
		{
			cout << "*";
		}
		if (b > 1)
		{
			cout << endl;
		}
		//cout << endl;
		n++;
		b--;
	}
	
}