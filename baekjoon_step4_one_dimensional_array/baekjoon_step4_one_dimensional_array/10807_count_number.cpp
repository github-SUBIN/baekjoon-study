#include <iostream>
using namespace std;

int main()
{
	int m;
	cin >> m;
	int* a = new int[m];
	for (int i = 0;i < m;i++)
	{
		int b;
		cin >> b;
		a[i] = b;
	}
	int w;
	int count = 0;
	cin >> w;
	for (int i = 0;i < m;i++)
	{
		
		if (a[i] == w)
		{
			count++;
		}
	}
	cout << count << endl;

}
