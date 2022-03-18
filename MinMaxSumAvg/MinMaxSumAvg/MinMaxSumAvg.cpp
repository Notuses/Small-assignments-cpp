#include <iostream>

using namespace std;

int numbers[]{ 9,5,2,8,3 };


int main()
{
    float sum{};
    float min = numbers[0];
    float max{};
    float avg{};

    int arrLength = sizeof numbers / sizeof numbers[0];

    cout << "array of intergers: ";

    for (int i = 0; i < arrLength; i++)
    {
        cout << numbers[i];
        if (i != arrLength - 1)
            cout << ", ";
        else
            cout << "." << endl;

        sum = sum + numbers[i];
        min = numbers[i] < min ? numbers[i] : min;
        max = numbers[i] > max ? numbers[i] : max;
    }
    avg = sum / arrLength;

    cout << "Sum = " << sum << endl;
    cout << "Minimum number: " << min << endl;
    cout << "Higest number: " << max << endl;
    cout << "Average: " << avg << endl;

    return 0;
}

