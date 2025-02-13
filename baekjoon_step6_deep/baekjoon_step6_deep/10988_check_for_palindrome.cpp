#include <iostream>
using namespace std;
int main()
{
	string word;
	cin >> word;

	int s = word.size();
	
	char* op = new char[s];
	
	for (int i = 0;i < s;i++)
	{
		op[i] = word[s-i-1];
	}

	int a = 1;

	for (int i = 0;i < s;i++)
	{
		if (word[i] == op[i])
		{
			a = 1;
		}
		else
		{
			a = 0;
			break;
		}
	}

	cout << a;

}