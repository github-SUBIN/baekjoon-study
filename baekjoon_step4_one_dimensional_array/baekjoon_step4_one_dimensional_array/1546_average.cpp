#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	double* sub = new double[n];
	for (int i = 0;i < n;i++)
	{
		double a;
		cin >> a;
		sub[i] = a;
	}	
	//ū�ͺ��� ���ġ�ϴ� �������� �Ϻ����� �̤� ���� �������
	for (int i = 0;i < n - 1;i++)
	{
		for (int j = 0;j < n-i-1;j++) //n-i-1 �������!!! i+1�ƴ�!
		{
			double temp = 0;
			if (sub[j] > sub[j + 1])
			{
				temp = sub[j];
				sub[j] = sub[j + 1];
				sub[j + 1] = temp;
			}
		}
		
	}
	//cout.precision(13);
	double best = sub[n - 1];
	/*
	int sum = 0;
	for (int i = 0;i < n;i++)
	{
		sum += sub[i];
	}
	double avg = sum / n;
	double newavg = (avg / best) * 100;
	cout << (double)newavg << endl;
	*/
	cout.precision(13);
	for (int i = 0;i < n;i++)
	{
		sub[i] = (sub[i] / best) * 100;
	}
	double sum = 0;
	for (int i = 0;i < n;i++)
	{
		sum += sub[i];
	}
	double newavg = sum / n;
	cout << newavg << endl;
}