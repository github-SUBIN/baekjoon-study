#include <iostream>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	//�ð� �ʰ� �ذ�

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
	int min = a[0];
	int max = a[0];
	for (int i = 0;i < n;i++)
	{
		if (min > a[i])
		{
			min = a[i];
		}
		if (max < a[i])
		{
			max = a[i];
		}
	}

	cout << min << " " << max << endl;

	//�ð����� �ذ��Ϸ��� ��ü �迭 ��迭�ϴ°� �ƴ϶� �ٷ� min�� max ��
	

}