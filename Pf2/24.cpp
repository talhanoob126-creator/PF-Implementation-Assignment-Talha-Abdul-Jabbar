include <iostream>
using namespace std;
int main() 
{        
    float ap, pf, cag, icp, fe, total, average;
    cout << "Enter marks of ap : ";
     cin >> ap;
     cout << "Enter marks of pf : ";
      cin >> pf;
      cout << "Enter marks of cag : ";
       cin >> cag;
       cout << "Enter marks of icp : ";
        cin >> icp;
        cout << "Enter marks of fe : ";
         cin >> fe;
         total=ap+pf+fe+icp+cag;
         average=total/5;
         cout << "TOTAL=" << total <<endl;
           cout << "Average=" << average <<endl;
    return 0; }

