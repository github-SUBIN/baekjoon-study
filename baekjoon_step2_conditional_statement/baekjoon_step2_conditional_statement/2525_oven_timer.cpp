#include <iostream>
using namespace std;

int main()
{
	int A, B;
	int C;
	cin >> A >> B;
	cin >> C;

	int mtoh;
	int realm;
	int realh;

	if ((B + C) >= 60)
	{
		mtoh = (B + C) / 60;
		realm = (B + C) % 60;
		realh = A + mtoh;

		if (realh > 23)
		{
			cout << realh - 24 << " " << realm << endl;
		}
		else
		{
			cout << realh << " " << realm << endl;
		}
	}
	else
	{
		cout << A << " " << B + C << endl;
	}

}