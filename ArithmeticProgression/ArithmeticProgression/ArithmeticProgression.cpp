
#include <iostream>
using namespace std;

int numbers[] = { 3, 5, 7, 9 };

int main()
{
	int firstNumber = numbers[1] - numbers[0];
	size_t LengthOfArray = sizeof numbers / sizeof numbers[0];
	bool HasArithmeticProg = true;

	for (int i = 0; i < LengthOfArray-1; i++)
	{
		int a = numbers[i];
		int b = numbers[i+1];

		if (a + firstNumber != b)
		{
			HasArithmeticProg = false;
			break;
		}
	}

	string resultTxt = HasArithmeticProg ? "Series has arithmetic progression." : "Series does not have arithmetic progression.";

	cout << resultTxt << endl;

	return 0;
}