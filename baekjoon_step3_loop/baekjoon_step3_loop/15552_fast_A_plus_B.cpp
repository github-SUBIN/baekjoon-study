#include <iostream>
using namespace std;

int main()
{
	//�� ������ ������ ó���ؾ� �ϴ� �����̴�.

	ios::sync_with_stdio(false);
	//C++ ǥ�� ��Ʈ��(cin, cout)�� C ǥ�� ��Ʈ��(scanf, printf) ���� ����ȭ�� �����Ͽ� ����� ���� ���δ�.
	cin.tie(NULL);
	//cin�� cout�� ������ ����, �Է� �� �ڵ����� ����� �߻����� �ʵ��� �Ѵ�.
	//�̷� ���� cout�� �ʿ��� �������� ��µǸ�, ������ ���ȴ�.

	int num;
	cin >> num;
	int** p = new int* [num];
	for (int i = 0;i < num;i++)
	{
		p[i] = new int[2];
	}
	for (int i = 0;i < num;i++)
	{
		for (int j = 0;j < 2;j++)
		{
			int a;
			cin >> a;
			p[i][j] = a;
		}
	}
	for (int i = 0;i < num;i++)
	{
		cout << p[i][0] + p[i][1] << "\n";
		//endl ��� \n�� ����ϸ� �ð��� �پ���.
	}

	for (int i = 0;i < num;i++)
	{
		delete[] p[i];
	}
	delete[] p;

	//���� ������ ������ �ڵ����ϸ�(��, ���� �޸� �Ҵ�� ������ �ϸ� �ð��� �� ���� ���)
	//�� ������ ������ �� �ִ�.
}
/*
#include <iostream>
using namespace std;

int main() {
	// ����� �ӵ� ����ȭ
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int num;
	cin >> num;

	for (int i = 0; i < num; i++) {
		int a, b;
		cin >> a >> b;
		cout << a + b << "\n";
	}

	return 0;
}
*/
//���� �߸����� �� �Ǽ�.. 
//�� �׽�Ʈ ���̽����� A+B�� ���ٿ� �ϳ��� ������� ����ϸ� �Ǵ°ǵ� 
//�׷� �ѹ��� ������ �� �ް� ����� �ʿ� ���� �ϳ� �Է��� �ϳ� �ٷ� ���
//�̷��� �ϸ� �Ǵ°ſ���...
//�� �����Ҵ� 2���� �迭 �� �ʿ� ����...