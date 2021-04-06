#include<iostream>
using namespace std;

int main() {
	int money;
	cin >> money;
	int FiveWon = money / 5;
	int TwoWon = 0;
	int Target = 5 * FiveWon + 2 * TwoWon;
	while (Target != money)
	{
		TwoWon++;
		Target = 5 * FiveWon + 2 * TwoWon;
		if (Target > money)
		{
			FiveWon--;
			TwoWon = 0;
		}

		if (FiveWon < 0)
		{
			cout << -1;
			return 0;
		}

	}
	cout << FiveWon + TwoWon;
	return 0;
}