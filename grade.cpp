// Write a Program to check the grade of the students based on marks -
// If marks <50 then Grade is F
// if marks >=50 <60 then Grade is D
// if marks >=60 <70 then Grade is C
// if marks >=70 <80 then Grade is B
// if marks >=80 <90 then Grade is A
// if marks >=90 <=100 then Grade is A+
// If marks are not in the above range then print “Invalid

#include<iostream>
using namespace std;
int main()
{
    int marks;
    cout << "Enter your marks "; cin >> marks;
    
    if(marks<0 || marks>100)
    {
        cout << "Invalid";
    }
    else if(marks<50)
    {
        cout << "Grade F"; } else if(marks>=50 && marks<60)
    {
        cout << "Grade D"; } else if(marks>=60 && marks<70)
    {
        cout << "Grade C"; } else if(marks>=70 && marks<80)
    {
        cout << "Grade B"; } else if(marks>=80 && marks<90)
    {
        cout << "Grade A";
    }
    else
    {
        cout << "Grade A+";
    }
    
    return 0;
}