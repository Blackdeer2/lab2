// Lab_02.cpp 
// < Висоцький Володимир > 
// Лабораторна робота № 2. 
// Лінійні програми. 
// Варіант 1

#include <iostream>
#include <cmath>

using namespace std;
int main()
{
   double Pi = 4 * atan(1.); // число пі
   double x;
   double z1;
   // double z2;

   cout << "x = ";
   cin >> x;
   z1 = 2 * (sin(3 * Pi - 2 * x) * sin(3 * Pi - 2 * x)) * (cos(5 * Pi + 2 * x) * cos(5 * Pi + 2 * x));
   //z2 = 1. / 4 - (1. / 4 * sin(5. / 2 * Pi - 8 * x));

   cout << "z1 = " << z1 << endl;
   //cout << "z2 = " << z2 << endl;
   return 0;
}