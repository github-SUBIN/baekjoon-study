#include <iostream>
using namespace std;

int main()
{
	int size;
	cin >> size;

	int** p = new int* [size];
	for (int i = 0;i < size;i++)
	{
		p[i] = new int[2];
	}

	for (int i = 0;i < size;i++)
	{
		for (int j = 0;j < 2;j++)
		{
			int a;
			cin >> a;
			p[i][j] = a;
		}
	}

	for (int i = 0;i < size;i++)
	{
		cout << p[i][0] + p[i][1] << endl;
	}

	for (int i = 0;i < 2;i++)
	{
		delete[] p[i];
	}
	delete[] p;
}