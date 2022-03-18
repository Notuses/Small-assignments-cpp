#include <iostream>
#include <string>

using namespace std;

void LastDigitOfNumber(int num) {
    string number = to_string(num);
	for (size_t i = 0; i < number.length(); i++)
	{
		cout << number[i] << " ";
	}
	cout << endl;
	for (int i = number.length() -1; i >= 0; i--)
	{
		cout << number[i] << " ";
	}
}

int main()
{
    int number = 137;
	LastDigitOfNumber(137);
	return 0;
}
