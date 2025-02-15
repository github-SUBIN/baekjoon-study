#include <iostream>
#include <string>
using namespace std;
int main()
{
	string score[20];
	for (int i = 0; i < 20;i++)
	{
		getline(cin, score[i]);
	}

	double scorenum[20];
	string scorealp[20];
	double scorereal[20];

	for (int i = 0;i < 20;i++)
	{
		int where = score[i].find(" ");
		scorenum[i] = stod(score[i].substr(where + 1, 4));

		int where2 = score[i].find(" ", where + 4);
		scorealp[i] = score[i].substr(where2+1, 2);

		if (scorealp[i] == "A+")
		{
			scorereal[i] = 4.5;
		}
		else if (scorealp[i] == "A0")
		{
			scorereal[i] = 4.0;
		}
		else if (scorealp[i] == "B+")
		{
			scorereal[i] = 3.5;
		}
		else if (scorealp[i] == "B0")
		{
			scorereal[i] = 3.0;
		}
		else if (scorealp[i] == "C+")
		{
			scorereal[i] = 2.5;
		}
		else if (scorealp[i] == "C0")
		{
			scorereal[i] = 2.0;
		}
		else if (scorealp[i] == "D+")
		{
			scorereal[i] = 1.5;
		}
		else if (scorealp[i] == "D0")
		{
			scorereal[i] = 1.0;
		}
		else if (scorealp[i] == "F")
		{
			scorereal[i] = 0.0;
		}
		else if (scorealp[i] == "P")
		{
			scorereal[i] = -1;
		}
	}

	double hackjumpungjum = 0;
	double hackjum = 0;
	
	int count = 0;

	for (int i = 0;i < 20;i++)
	{
		if (scorereal[i] > -1)
		{
			hackjumpungjum += scorenum[i] * scorereal[i];
			hackjum += scorenum[i];
		}
	}
	double total = hackjumpungjum / hackjum;
	cout.precision(8);
	cout<< total << endl;



	/*
	for (int i = 0;i < 3;i++)
	{
		cout << scorenum[i] << endl;
	}
	for (int i = 0;i < 3;i++)
	{
		cout << scorealp[i] << endl;
	}
	for (int i = 0;i < 3;i++)
	{
		cout << scorereal[i] << endl;
	}
	*/

}