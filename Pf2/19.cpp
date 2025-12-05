#include <iostream>
using namespace std;
int main()
{
    int age, months , days;
    cout << "Enter age in years: ";
    cin >> age;
    months= age*12;
    days= age*365;
    cout << "age in months "<< months << endl;
     cout << "age in days "<< days;
     return 0;
}

