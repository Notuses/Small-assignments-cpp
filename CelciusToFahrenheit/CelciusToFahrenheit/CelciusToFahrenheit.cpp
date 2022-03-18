#include <iostream>

using namespace std;

float ConvertToFahrenheit(float celsius) {
    return celsius * 9 / 5 + 32;
}

int main()
{
    float celsius = 30.4;
    cout << celsius << " degrees Celsuis is " << ConvertToFahrenheit(celsius) << " degrees Fahrenheit." << endl;
    return 0;
}
