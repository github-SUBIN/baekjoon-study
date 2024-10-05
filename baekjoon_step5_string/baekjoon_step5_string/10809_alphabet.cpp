#include <iostream>
using namespace std;
int main()
{
	string s;
	cin >> s;

	char alphabet[26];
	for (int i = 0;i < 26;i++)
	{
		alphabet[i] = 'a' + i;
	}

	int alphabetint[26];
	for (int i = 0;i < 26;i++)
	{
		alphabetint[i] = -1;
	}

	for (int i = 0;i < 26;i++)
	{
		for (int j = 0;j < s.size(); j++)
		{
			if (alphabet[i] == s[j])
			{
				if (alphabetint[i] == -1)
				{
					alphabetint[i] = j;
				}
			}
		}
	}

	for (int i = 0;i < 26;i++)
	{
		cout << alphabetint[i] << " ";
	}



}