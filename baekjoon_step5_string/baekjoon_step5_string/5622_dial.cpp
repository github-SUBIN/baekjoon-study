#include <iostream>
using namespace std;
int main()
{
	string s;
	cin >> s;
	int size = s.size();
	int total = 0;

	for (int i = 0;i < size;i++)
	{
		char c = s[i];
		int number = 0;
		if (c == 'A' || c == 'B' || c == 'C')
		{
			number = 3;
		}
		else if (c == 'D' || c == 'E' || c == 'F')
		{
			number = 4;
		}
		else if (c == 'G' || c == 'H' || c == 'I')
		{
			number = 5;
		}
		else if (c == 'J' || c == 'K' || c == 'L')
		{
			number = 6;
		}
		else if (c == 'M' || c == 'N' || c == 'O')
		{
			number = 7;
		}
		else if (c == 'P' || c == 'Q' || c == 'R' || c == 'S')
		{
			number = 8;
		}
		else if (c == 'T' || c == 'U' || c == 'V')
		{
			number = 9;
		}
		else if (c == 'W' || c == 'X' || c == 'Y' || c == 'Z')
		{
			number = 10;
		}
		total += number;
	}
	cout << total;

}