#include <iostream>

using namespace std;

void CheckEvenOrOdd(int num) {
    string EvenOrOdd = num % 2 == 0 ? "even" : "odd";
    cout << num << " is an " << EvenOrOdd << " number" << endl;
}

int main()
{
    int number = 3;
    CheckEvenOrOdd(number);
    return 0;
}