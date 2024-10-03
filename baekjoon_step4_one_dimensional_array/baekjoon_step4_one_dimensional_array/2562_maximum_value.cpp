#include <iostream>
using namespace std;

int main()
{
	int num[9];
	for (int i = 0;i < 9;i++)
	{
		int a;
		cin >> a;
		num[i] = a;
	}
	int max = num[0];
	for (int i = 0;i < 9;i++)
	{
		if (max < num[i])
		{
			max = num[i];
		}
	}
	int w = 0;
	for (int i = 0;i < 9;i++)
	{
		if (max == num[i])
		{
			w = i + 1;
		}
	}
	cout << max << endl;
	cout << w << endl;
}