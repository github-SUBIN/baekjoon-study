#include <iostream>
using namespace std;
int main()
{
	int t;
	cin >> t;
	string* s = new string[t];
	for (int i = 0;i < t;i++)
	{
		string ss;
		cin >> ss;
		s[i] = ss;
	}
	for (int i = 0;i < t;i++)
	{
		int size = s[i].length();
		cout << s[i][0] << s[i][size - 1] << endl;
	}
}