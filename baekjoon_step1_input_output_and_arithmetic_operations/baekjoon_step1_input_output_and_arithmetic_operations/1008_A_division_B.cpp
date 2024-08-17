#include <iostream>
using namespace std;

int main()
{
	int a, b;

	cout.precision(13);
	//실수를 n자리 만큼 출력하게 한다.
	//(6)하면 0.33333이렇게 총 6자리 출력

	cin >> a >> b;
	cout << (double)a / b << endl;
}