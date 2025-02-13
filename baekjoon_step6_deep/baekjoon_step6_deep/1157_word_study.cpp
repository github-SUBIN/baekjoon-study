/*
#include <iostream>
using namespace std;
int main()
{
	string word;
	cin >> word;
	int size = word.size();

	for (int i = 0;i < size;i++)
	{
		word[i] = toupper(word[i]);
	}

	int* alp = new int[size];

	for (int i = 0;i < size;i++)
	{
		int num = 0;
		for (int j = i;j < size;j++)
		{
			if (word[i] == word[j])
			{
				num++;
				alp[i] = num;
			}
		}
	}
	
	for (int i = 0;i < size;i++)
	{
		for (int j = 0;j < size;j++)
		{
			if (alp[i] > alp[j])
			{
				alp[j] = 0;
			}
		}
	}

	int many = 0;
	int maxnum = 0;
	int max = 0;
	for (int i = 0;i < size;i++)
	{
		for (int j = i+1;j < size;j++)
		{
			if (alp[i] != 0 || alp[j] != 0)
			{
				if (alp[i] == alp[j])
				{
					many++;
				}
				else if (alp[i] > alp[j])
				{
					maxnum = alp[i];
					max = i;
				}
				else if (alp[i] < alp[j])
				{
					maxnum = alp[j];
					max = j;
				}
			}
			
		}
	}

	if (many != 0)
	{
		cout << "?";
	}
	else
	{
		cout << word[max];
	}
	
}
*/

#include <iostream>
using namespace std;
int main()
{
	string word;
	cin >> word;
	int size = word.size();
	int count[26] = { 0 };

	for (int i = 0;i < size;i++)
	{
		word[i] = toupper(word[i]);
		count[word[i] - 'A']++;
	}

	int max = 0;
	int maxnum = 0;
	for (int i = 0;i < 26;i++)
	{
		if (count[i] > max)
		{
			max = count[i];
			maxnum = i;
		}
	}

	int countmax = 0;
	
	
	for (int i = 0;i < 26;i++)
	{
		if (count[i] == max)
		{
			countmax++;
		}
	}

	if (countmax==1)
	{
		cout << char(maxnum + 65) << endl;
	}
	else
	{
		cout << "?" << endl;
	}
	

	


}