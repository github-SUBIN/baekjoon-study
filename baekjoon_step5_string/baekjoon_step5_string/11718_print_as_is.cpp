#include <iostream>
#include <string>
using namespace std;
int main()
{
	string s;
	while (1)
	{
		getline(cin, s);
		if (cin.eof())
		{
			break;
		}
		cout << s << endl;
	}
}

/*
#include <iostream>
#include <string>
using namespace std;
int main()
{
	char s[101];
	while (1)
	{
		cin.getline(s, 101);
		if (cin.eof())
		{
			break;
		}
		cout << s << endl;
	}
}
//�� �ڵ�� C������ �ڵ��̴�. cin.getline�� char������ ��밡���� C������ ǥ���̴�.
*/