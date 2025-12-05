#include <iostream>
using namespace std;
int main() 
{        
    float radius, area, circum;
    cout << "Enter radius of a circle: ";
    cin >> radius;
    area= 3.14*radius*radius;
    circum= 2*3.14*radius;
	cout << "Area is :" << area <<endl;
   cout << "Circumference is :" << circum <<endl;
    return 0;
}

