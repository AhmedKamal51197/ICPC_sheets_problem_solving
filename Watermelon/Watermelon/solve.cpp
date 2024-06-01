#include<iostream>
using namespace std;
int main()
{
	int weight;
	cin >> weight;
	weight -= 2;
	if (weight % 2 == 0 && weight!=0 )
	{
		cout << "YES\n";
	}
	else
	{
		cout << "NO\n";
	}
}