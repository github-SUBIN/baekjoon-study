#include <iostream>
#include <string>
using namespace std;
int main()
{
	string s;
	getline(cin, s);

	int word = 0;
	for (int i = 0;i < s.size();i++)
	{
		int where;
		if (s[i] == ' ')
		{
			where = i;
			if (where == 0 || where == s.size() - 1)
			{
				if (s[where + 1] != '\n')
				{
					word++;
				}
			}
			else
			{
				if (s[where - 1] != '\n')
				{
					word++;
				}
			}
		}
	}
	cout << word;
}