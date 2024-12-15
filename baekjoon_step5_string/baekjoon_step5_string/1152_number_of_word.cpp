#include <iostream>
#include <string>
using namespace std;
int main()
{
	string s;
	getline(cin, s);
	
	int word = 0;

	int start = 0;

	while (1)
	{
		int where = s.find(' ', start);
		//cout << where << endl;

		/*
		if (where == - 1 || where == s.size()-1)
		{
			//string sub = s.substr(start, s.size() - 1);
			//cout << sub << endl;
			if (where == start)
			{
				start = where + 1;
				//cout << "->" << start << "<-" << endl;
			}
			else if (s[s.size() - 1] != ' ')
			{
				word++;
				//start = where + 1;
				//cout << "->" << start << "<-" << endl;
			}
			
		}
		*/
		if (where == -1 && s[s.size() - 1] != ' ')
		{
			word++;
			break;
		}
		else if (where == s.size() - 1)
		{
			if (where == start)
			{
				start = where + 1;
			}
			else
			{
				word++;
			}
			break;
		}
		else if (start > s.size())
		{
			break;
		}
		else
		{
			//string sub = s.substr(start, where - start);
			//cout << sub << endl;
			if (where == 0)
			{
				//word = word;
			}
			else if (where == start)
			{
				//word = word;
			}
			else
			{
				string sub = s.substr(start, where - start);
				//cout << sub << endl;
				word++;
			}
			start = where + 1;
			//cout << "->" << start << "<-" << endl;
		}
	}

	cout << word;
}