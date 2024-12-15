#include <iostream>
#include <string>
using namespace std;
int main()
{
	string s; //문자열 설정
	getline(cin, s); //공백 포함해서 하나의 문자열 키보드로 받음

	int word = 0; //단어의 개수 = 공백으로 구분된 문장에 적힌 단어 개수. 같은 단어도 포함된 만큼 센다.
	int start = 0; //문자열 s에서 시작하는 인덱스 위치

	while (1)
	{
		int where = s.find(' ', start); //문자열 s에서 start위치부터 전체 중 공백인 부분의 첫번째 인덱스 반환

		if (where == -1 && s[s.size() - 1] != ' ') //문장이 단어로 끝났을 때
			//만약 더 이상 공백이 없으면서 문자열의 마지막에서 두번째가 공백이 아닐 때
			//즉, 문장이 단어로 끝났을 때, 그리고 공백으로 끝났는데 연속 공백이 아니라 마지막에만 공백일때
		{
			word++; //단어 개수 증가
			break; //while문 탈출
		}
		else if (where == s.size() - 1) //문장이 공백으로 끝났을 때
			//만약 공백이 마지막까지 있을 때 
		{
			if (where == start) //그 전에도 공백이 있었으면 start랑 where이 같을거니까
			{
				start = where + 1; //시작부분 하나 더 옮기기
			}
			else //그게 아니라 그 전에는 공백이 없어서 start랑 where이 서로 다르면
			{
				word++; //단어 개수 증가
			}
			break; //문자열의 마지막까지 왔으니 while문 탈출
		}
		else if (start > s.size() - 1) 
			//시작부분의 인덱스가 문자열 길이의 인덱스보다 길때
		{
			break;
		}
		else //문장 중간부분
		{
			if (where == 0)
			{
				//시작이 공백일 때 아무일도 일어나지 않고 start 옮기기
			}
			else if (where == start)
			{
				//문장 중간에 공백이 있어 sub문자열이 공백일 때 where과 start가 같다. 이건 단어가 아니므로 아무일도 일어나지 않는다.
			}
			else 
			{
				string sub = s.substr(start, where - start); //시작부분부터 공백 - 시작부분 개수만큼 서브문자열 지정
				word++; //단어 개수 증가
			}
			start = where + 1; //문장 중간의 공백으로 단어 구분하기 위해 start부분 옮기기
		}
	}
	cout << word; //단어 개수 출력
}