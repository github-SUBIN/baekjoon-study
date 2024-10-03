#include <iostream>
using namespace std;
int main()
{
	int student[28];
	for (int i = 0;i < 28;i++)
	{
		int a;
		cin >> a;
		student[i] = a;
	}
	int newstudent[30] = { 0 };
	for (int i = 0; i < 30;i++)
	{
		for (int j = 0;j < 28;j++)
		{
			if (student[j] == i + 1)
			{
				newstudent[i] = 1;
			}
		}
	}
	for (int i = 0;i < 30;i++)
	{
		if (newstudent[i] == 0)
		{
			cout << i + 1 << " ";
		}
	}


}