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

   cout << "Enter a operator: ";
   cin >> op;
   
   switch (op)
   {
       case 'c':
       cout << "Enter a number: ";
       cin >> celsius;
       cout << celsius_to_ferenheit(celsius);
       break;
       case 'f':
       cout << "Enter a number: ";
       cin >> ferenheit;
       cout << ferenheit_to_celsius(ferenheit);
       break;
       default:
       cout << "Invalid operator!!!";
       break;
   }

   return 0;
}