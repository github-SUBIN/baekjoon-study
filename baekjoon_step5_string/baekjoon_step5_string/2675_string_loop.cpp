#include <iostream>
#include <string>
using namespace std;
int main()
{
	int t;
	cin >> t;
	string** s = new string*[t];
	for (int i = 0;i < t;i++)
	{
		s[i] = new string[2];
		/*
		* �ٷ� �Ʒ� for�� ����� �̰͸� �ᵵ ���� ��� ����!
		string a, b;
		cin >> a >> b;
		s[i][0] = a;
		s[i][1] = b;
		*/
	}
	for (int i = 0;i < t;i++)
	{
		for (int j = 0;j < 2;j++)
		{
			string a;
			cin >> a;
			s[i][j] = a;
		}
	}

	for (int i = 0;i < t;i++)
	{
		/*
		* �̰� ���ο� �õ��ε� ���� �̷��ʿ� ���µ�
		int size = s[i][1].size();
		char* strchar = new char[size];
		for (int j = 0;j < size;j++)
		{
			strchar[j] = s[i][1];
		}
		*/
		string strchar = s[i][1];
		int size = s[i][1].size();
		int num = stoi(s[i][0]);
		for (int j = 0;j < size;j++)
		{
			char c = strchar[j];
			for (int k = 0;k < num;k++)
			{
				cout << c;
			}
		}
		cout << endl;
		
	}
}