#include <iostream>
using namespace std;

int main()
{
	int a, b;

	cout.precision(13);
	//�Ǽ��� n�ڸ� ��ŭ ����ϰ� �Ѵ�.
	//(6)�ϸ� 0.33333�̷��� �� 6�ڸ� ���

	cin >> a >> b;
	cout << (double)a / b << endl;
}