// 26.10.zad1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	int a, b;
	cout << "Two numbers: " << endl;
	cin >> a >> b;
	for (int i = a; i <= b; i++)
	{
		if (i > 0 && i < 9)
		{
			if (i == 1) cout << "one ";
			if (i == 2) cout << "two ";
			if (i == 3)cout << "three ";
			if (i == 4)cout << "four ";
			if (i == 5)cout << "five ";
			if (i == 6)cout << "six ";
			if (i == 7)cout << "seven ";
			if (i == 8)cout << "eight ";
		}
		else if (i % 2 == 0) cout << "even ";
		else cout << "uneven ";

	}
}







// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
