#include <iostream>
using namespace std;

int main()
{
	int tot;
	int num;
	cin >> tot;
	cin >> num;

	int** item = new int* [num];
	for (int i = 0;i < num;i++)
	{
		item[i] = new int[2];
	}

	for (int i = 0;i < num;i++)
	{
		for (int j = 0;j < 2;j++)
		{
			int a;
			cin >> a;
			item[i][j] = a;
		}
	}

	int sum = 0;

	for (int i = 0;i < num;i++)
	{
		sum += item[i][0] * item[i][1];
	}
	if (sum == tot)
	{
		cout << "Yes" << endl;
	}
	else
	{
		cout << "No" << endl;
	}

	for (int i = 0;i < num;i++)
	{
		delete[] item[i];
	}
	delete[] item;
}