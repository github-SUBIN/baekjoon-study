#include <iostream>
using namespace std;

int main()
{
	//이 문제는 빠르게 처리해야 하는 문제이다.

	ios::sync_with_stdio(false);
	//C++ 표준 스트림(cin, cout)과 C 표준 스트림(scanf, printf) 간의 동기화를 해제하여 입출력 성능 높인다.
	cin.tie(NULL);
	//cin과 cout의 연결을 끊어, 입력 후 자동으로 출력이 발생하지 않도록 한다.
	//이로 인해 cout이 필요한 시점에만 출력되며, 성능이 향상된다.

	int num;
	cin >> num;
	int** p = new int* [num];
	for (int i = 0;i < num;i++)
	{
		p[i] = new int[2];
	}
	for (int i = 0;i < num;i++)
	{
		for (int j = 0;j < 2;j++)
		{
			int a;
			cin >> a;
			p[i][j] = a;
		}
	}
	for (int i = 0;i < num;i++)
	{
		cout << p[i][0] + p[i][1] << "\n";
		//endl 대신 \n을 사용하면 시간이 줄어든다.
	}

	for (int i = 0;i < num;i++)
	{
		delete[] p[i];
	}
	delete[] p;

	//또한 간단한 구조로 코딩을하면(즉, 동적 메모리 할당과 해제를 하면 시간이 더 많이 든다)
	//더 빠르게 실행할 수 있다.
}
/*
#include <iostream>
using namespace std;

int main() {
	// 입출력 속도 최적화
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int num;
	cin >> num;

	for (int i = 0; i < num; i++) {
		int a, b;
		cin >> a >> b;
		cout << a + b << "\n";
	}

	return 0;
}
*/
//문제 잘못읽은 내 실수.. 
//각 테스트 케이스마다 A+B를 한줄에 하나씩 순서대로 출력하면 되는건데 
//그럼 한번에 예제를 다 받고 출력할 필요 없이 하나 입력후 하나 바로 출력
//이렇게 하면 되는거였다...
//즉 동적할당 2차원 배열 할 필요 없음...