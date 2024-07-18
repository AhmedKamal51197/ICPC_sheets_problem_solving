
#include <iostream>
#include<cmath>
using namespace std; 
int main()
{
	int numOfOdd, numOfEve;
	cin >> numOfEve>>numOfOdd;
	if ((abs(numOfOdd - numOfEve) == 1 || abs(numOfOdd - numOfEve) == 0) && (numOfOdd != 0 && numOfEve != 0))
	{
		cout << "YES\n";
	}
	else
	{
		cout << "NO\n";
	}
}
