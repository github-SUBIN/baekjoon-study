#include <iostream>
using namespace std;

int main()
{
	int a, b, c;

	cin >> a >> b >> c;

	/*
	if (a == b || b == c || c == a)
	{
		int same;
		if (a == b)
		{
			same = a;
		}
		else if (b == c)
		{
			same = b;
		}
		else if (c == a)
		{
			same = c;
		}

		if (a == b && b == c)
		{
			same = a;
			cout << 10000 + (same * 1000) << endl;
		}
		else
		{
			cout << 1000 + (same * 100) << endl;
		}
	}
	*/
	
	if (a == b && b != c)
	{
		cout << 1000 + (a * 100) << endl;
	}
	else if (b == c && c != a)
	{
		cout << 1000 + (c * 100) << endl;
	}
	else if (c == a && a != b)
	{
		cout << 1000 + (a * 100) << endl;
	}
	else if (a == b && b == c)
	{
		cout << 10000 + (a * 1000) << endl;
	}
	
	else if (a != b && b != c && c != a)
	{
		int max = a;
		if (b > max)
		{
			max = b;
		}
		if (c > max)
		{
			max = c;
		}
		cout << max * 100 << endl;
	}
}