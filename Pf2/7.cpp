#include <iostream>
using namespace std;
int main()
{
    int rollNo;
    float pf, ic, cg;
    float total, average;
    cout << "Enter Roll No: ";
    cin >> rollNo;
    cout << "Enter marks in Programming Fundamentals: ";
    cin >> pf;
    cout << "Enter marks in Introduction to Computing: ";
    cin >> ic;
    cout << "Enter marks in Computer Graphics: ";
    cin >> cg;
     total = pf + ic + cg;
     average = total / 3;
    cout << "\nRoll No: " << rollNo << endl;
    cout << "Total Marks: " << total << endl;
    cout << "Average Marks: " << average << endl;
    return 0;
}

