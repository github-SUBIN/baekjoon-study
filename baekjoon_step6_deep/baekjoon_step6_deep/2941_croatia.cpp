#include <iostream>
using namespace std;
int main()
{
	string word;
	cin >> word;

	int size = word.size();

	int count = 0;
	for (int i = 0;i < size;i++)
	{
		if (word[i] == 'c')
		{
			if (word[i + 1] == '=' || word[i + 1] == '-')
			{
				count++;
				i++;
			}
			else
			{
				count++;
			}
			
		}
		else if (word[i] == 'd' && word[i+1]=='z'&&word[i+2]=='=')
		{
			count++;
			i = i + 2;
			/*
			if (word[i + 1] == 'z')
			{
				if (word[i + 2] == '=')
				{
					count++;
					i = i + 2;
				}
			}
			
			else if (word[i + 1] == '-')
			{
				count++;
				i++;
			}
			else
			{
				count++;
			}
			*/
		}
		else if (word[i] == 'd' && word[i + 1] == '-')
		{
			count++;
			i++;
		}
		else if (word[i] == 'l' && word[i + 1] == 'j')
		{
			count++;
			i++;
		}
		else if (word[i] == 'n' && word[i + 1] == 'j')
		{
			count++;
			i++;
		}
		else if (word[i] == 's' && word[i + 1] == '=')
		{
			count++;
			i++;
		}
		else if (word[i] == 'z' && word[i + 1] == '=')
		{
			count++;
			i++;
		}
		else
		{
			count++;
		}
	}

	cout << count;
}