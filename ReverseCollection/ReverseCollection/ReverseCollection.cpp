#include <iostream>

using namespace std;

string toReverse = "Hello";

int main()
{
	string reverse;
	for (int i = toReverse.size() - 1; i >= 0; i--)
	{
		reverse += toReverse[i];
	}

	cout << reverse;
}
