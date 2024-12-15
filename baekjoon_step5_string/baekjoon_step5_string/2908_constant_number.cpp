#include <iostream>
using namespace std;
int main()
{
	int m1, m2;
	cin >> m1 >> m2;

	int mm1 = ((m1 % 10) * 100) + (((m1 % 100) / 10) * 10) + (m1 / 100);
	int mm2 = ((m2 % 10) * 100) + (((m2 % 100) / 10) * 10) + (m2 / 100);

	if (mm1 > mm2)
	{
		cout << mm1 << endl;
	}
	else
	{
		cout << mm2 << endl;
	}
}