#include <iostream>
using namespace std;
int main()
{
	int n, m;
	cin >> n >> m;
	int* basket = new int[n];
	for (int a = 0;a < n;a++)
	{
		basket[a] = a + 1;
	}
	for (int a = 0;a < m;a++)
	{
		int i, j;
		cin >> i >> j;
		int temp;
		temp = basket[i - 1];
		basket[i - 1] = basket[j - 1];
		basket[j - 1] = temp;
	}
	for (int a = 0;a < n;a++)
	{
		cout << basket[a] << " ";
	}
}