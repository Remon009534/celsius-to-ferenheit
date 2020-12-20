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
   double temp;
   char op;

   cout << "Enter a operator: ";
   cin >> op;

   switch (op)
   {
       case 'c':
       cout << "Enter a number: ";
       cin >> temp;
       cout << celsius_to_ferenheit(temp);
       break;
       case 'f':
       cout << "Enter a number: ";
       cin >> temp;
       cout << ferenheit_to_celsius(temp);
       break;
       default:
       cout << "Invalid operator!!!";
       break;
   }

   return 0;
}