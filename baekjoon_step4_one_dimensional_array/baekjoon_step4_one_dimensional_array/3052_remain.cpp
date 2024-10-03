#include <iostream>
using namespace std;
int main()
{
	int num[10];
	for (int i = 0; i < 10;i++)
	{
		int a;
		cin >> a;
		num[i] = a % 42;
	}
	int same = 0;
	
	for (int i = 0;i < 10;i++)
	{
		for (int j = 0;j < 10;j++)
		{
			if (i != j)
			{
				if (num[i] == num[j] && num[i]>=0 && num[j]>=0)
				{
					same += 1;
					num[j] = -1;
				}
			}
		}
	}
	cout << 10 - same;
}