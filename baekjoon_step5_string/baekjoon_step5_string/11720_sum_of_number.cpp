#include <iostream>
#include <string>
using namespace std;
int main()
{
	int n;
	cin >> n;
	string* s = new string[n];
	for (int i = 0;i < n;i++)
	{
		char a; 
		//char라서 하나의 문자(숫자 한 자릿수)를 입력받는다.
		//숫자를 공백없이 입력할 때, cin>>는 입력된 문자열을 한문자씩 처리한다. 
		//그래서 공백 없이 여러 숫자를 입력해도 숫자가 하나씩 변수 a에 들어간다.
		cin >> a;
		//cin은 기본적으로 공백을 기준으로 입력을 처리하지만, 숫자를 공백 없이 입력할 때도 각 문자가 하나씩 cin>>a에 잘라서 들어간다.
		s[i] = a;
	}
	int sum = 0;
	for (int i = 0;i < n;i++)
	{
		sum += stoi(s[i]);
	}
	cout << sum;
}