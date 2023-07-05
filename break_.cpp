// Problem Statement
// Write a program to print all numbers between two intervals,
// namely low and high. But, with a special condition that 
// if any number in the range while getting printed becomes 
// divisible by 13 then you must not print anything further and stop.
// (Do this using the Break Statement)

// Example -

// Input -
// 1 10
// Output 
// 1 2 3 4 5 6 7 8 9 10

// Input
// 10 20
// Output
// 10 11 12 13

// Input
// -18 0
// Output
// -18 -17 -16 -15 -14 -13

 
//C++(For Loop)
#include <iostream>

using namespace std;
int main() {
    
    int low, high;
    cout << "Enter the numbers: "; cin >> low >> high;
    
    for(int i = low;i<=high;i++){
    {
        cout << i << " ";
        
        if(i%13==0)
            break;
    }
    
    return 0;
}

// C++(While Loop)
// #include <iostream>

// using namespace std;
// int main() {
    
//     int low, high;
//     cout << "Enter the numbers: "; cin >> low >> high;
    
//     int i = low;
//     while(i<=high)
//     {
//         cout << i << " ";
        
//         if(i%13==0)
//             break;
//         i++;
//     }
    
//     return 0;
// }