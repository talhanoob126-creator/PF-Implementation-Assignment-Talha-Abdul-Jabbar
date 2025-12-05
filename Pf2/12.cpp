
#include <iostream>
using namespace std;
int main() 
{
    const float PI = 3.1417;
    float R, H;
    cout << "Enter radius: ";
    cin >> R;
    cout << "Enter height: ";
    cin >> H;
    float volume = PI * R * R * H;
    cout << "Volume of cylinder = " << volume << endl;
    return 0;
}


