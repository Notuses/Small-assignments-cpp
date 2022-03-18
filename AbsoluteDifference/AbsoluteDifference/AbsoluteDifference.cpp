#include <iostream>

using namespace std;

int DoAbs(int a, int b) {
	int min;
	int max;
	int abs{};
	if (a <= b)
	{
		min = a;
		max = b;
	}
	else
	{
		min = b;
		max = a;
	}
	for (int i = min; i < max; i++)
	{
		abs++;
	}

	return abs;
}


int main()
{
    int numberA = -6;
    int numberB = 4;

	cout << "Absolute number: " << DoAbs(numberA, numberB);

	return 0;
}