#include <iostream>
#include <string>
using namespace std;

double celsius_to_ferenheit(double c)
{
    return (c * 9/5) + 32;
}
double ferenheit_to_celsius(double f)
{
    return (f - 32) * 5/9;
}
int main()
{
    double celsius;
    double ferenheit;
    char op;

    cout << "Enter a celsius: ";
    cin >> celsius;

    cout << "Enter a ferenheit: ";
    cin >> ferenheit;

    cout << "Enter a op: ";
    cin >> op;

    switch (op)
    {
        case 'c':
        cout << celsius_to_ferenheit(celsius);
        break;
        case 'f':
        cout << ferenheit_to_celsius(ferenheit);
        break;
        default:
        cout << "invalid operator!!! ";
        break;
    }

    return 0;
}