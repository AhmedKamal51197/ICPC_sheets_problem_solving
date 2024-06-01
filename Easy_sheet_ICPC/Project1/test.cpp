#include <iostream>
#include<iomanip>
#include<string>
using namespace std;
int main() {
	string x;
	cin >> x;
	if (x.size() == 1 && x[0]!='?')
	{
		cout << x << endl;
	}
	else if (x.size() == 1 && x[0] == '?')
	{
		cout << "a" << endl;
	}
	else
	{
		for (int i = 0; i <= (x.size()-1)/2; i++)
		{
			int j = x.size() - 1 - i;
			if (x[i] == '?' && x[j] != '?')
			{
				x[i] = x[j];
			}
			else if (x[i] != '?' && x[j] == '?')
			{
				x[j] = x[i];
			}
			else if (x[i] == '?' && x[j] == '?')
			{
				x[i] = x[j] = 'a';
			}


		}
	

		if (x.size() % 2 != 0 && x[(x.size() - 1) / 2] == '?')
		{
			x[(x.size() - 1) / 2] = 'a';
		}
		bool bilndarom = 1;
		for (int i = 0; i < x.size() / 2; i++)
		{

			if (x[i] != x[x.size() - 1 - i] )
			{
				bilndarom = 0;
				break;
			}
		

		}
		if (bilndarom )
		{
			cout << x << endl;
		}
		else
		{
			//cout << x << endl;


			cout << "-1" << endl;
		}
	}
}