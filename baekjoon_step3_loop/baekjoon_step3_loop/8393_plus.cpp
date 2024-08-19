#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int sum = 0;

	
	for (int i = 1;i <= n;i++)
	{
		sum += i;
	}
	cout << sum << endl;
	

	//cout << (n * (1 + n)) / 2 << endl;
	//이건 등차수열의 합 공식으로 이것도 정답!
}