#include <iostream>
using namespace std;
int main()
{
	int num;
	cin >> num;
	string* word = new string[num];
	for (int i = 0;i < num;i++)
	{
		cin >> word[i];
	}

	//char* oneword = new char;
	int groupword = 0;
	for (int i = 0;i < num;i++)
	{
		string* oneword = new string[word[i].size()];
		//string oneword;
		for (int j = 0;j < word[i].size();j++)
		{
			if (word[i][j] != word[i][j + 1])
			{
				oneword[j] = word[i][j];
			}
			else
			{
				oneword[j]=" ";
			}
			//cout << oneword[j] << " ";
		}
		int a = 0;
		for (int k = 0;k < word[i].size();k++)
		{
			//int a = 0;
			for (int t = k;t < word[i].size();t++)
			{
				if (t != k && oneword[k] == oneword[t] && oneword[k]!=" ")
				{
					a++;
				}
			}
		}
		if (a == 0)
		{
			groupword++;
		}
		//cout << endl;
	}
	cout << groupword;
}