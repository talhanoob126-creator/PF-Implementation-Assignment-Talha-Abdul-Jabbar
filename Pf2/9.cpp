#include <iostream>
using namespace std;
int main()
{
int a, b, c, d;
cout << "Enter first numbers: ";
cin >> a ;
cout << "Enter second numbers: ";
cin >> b ;
cout << "Enter third numbers: ";
cin >> c ;
cout << "Enter fourth numbers: ";
cin >> d ;
int maxNum = a;
if (b > maxNum) maxNum = b;
if (c > maxNum) maxNum = c;
if (d > maxNum) maxNum = d;
cout << "Maximum number is: " << maxNum << endl;
return 0;
}
?

