#include <iostream>
#include <string>
using namespace std;
int main()
{
	int n;
	cin >> n;
	string* s = new string[n];
	for (int i = 0;i < n;i++)
	{
		char a; 
		//char�� �ϳ��� ����(���� �� �ڸ���)�� �Է¹޴´�.
		//���ڸ� ������� �Է��� ��, cin>>�� �Էµ� ���ڿ��� �ѹ��ھ� ó���Ѵ�. 
		//�׷��� ���� ���� ���� ���ڸ� �Է��ص� ���ڰ� �ϳ��� ���� a�� ����.
		cin >> a;
		//cin�� �⺻������ ������ �������� �Է��� ó��������, ���ڸ� ���� ���� �Է��� ���� �� ���ڰ� �ϳ��� cin>>a�� �߶� ����.
		s[i] = a;
	}
	int sum = 0;
	for (int i = 0;i < n;i++)
	{
		sum += stoi(s[i]);
	}
	cout << sum;
}