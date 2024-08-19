#include <iostream>
using namespace std;

int main()
{
	int num;
	cin >> num;
	int** p = new int* [num];
	for (int i = 0;i < num;i++)
	{
		p[i] = new int[2];
	}
	for (int i = 0;i < num;i++)
	{
		for (int j = 0;j < 2 ; j++)
		{
			int a;
			cin >> a;
			p[i][j] = a;
		}
	}
	for (int i = 0;i < num;i++)
	{
		cout << "Case #" << i + 1 << ": " << p[i][0] + p[i][1] << endl;
	}

	for (int i = 0;i < num;i++)
	{
		delete[] p[i];
	}
	delete[] p;
}
