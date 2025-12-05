#include <iostream>
using namespace std;
int main() 
{
double millimeters;
cout << "Enter length in millimeters: ";
cin >> millimeters;
double inches = millimeters / 25.4;
cout << millimeters << " millimeters is equal to " << inches << " inches." << endl;
    return 0;
}	

