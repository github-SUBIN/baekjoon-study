#include <iostream>
using namespace std;
int main()
{
	int sum = 1;

	while (sum != 0)
	{
		int a, b;
		cin >> a >> b;
		sum = a + b;
		if (sum != 0)
		{
			cout << a + b << endl;
		}
		else
		{
			break;
		}
	}
}