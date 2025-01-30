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
//이 코드는 C언어스러운 코드이다. cin.getline이 char에서만 사용가능한 C언어스러운 표현이다.
*/