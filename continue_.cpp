// Problem Description
// Write a program to print all numbers between two intervals, 
// namely low and high. But, with a special condition that numbers 
// divisible by 5 must not be printed and skipped. (Do this using continue Statement)

// Sample Input
// 1 10
// Sample Output
// 1 2 3 4 6 7 8 9

// Sample Input
// 10 20
// Sample Output
// 11 12 13 14 16 17 18 19

//C++
#include <iostream>

using namespace std;
int main() {
    
    int low, high;
    cout << "Enter the numbers: "; cin >> low >> high;
    
    for(int i = low;i<=high;i++)
    {
        if(i%5==0)
            continue;
        
        cout << i << " ";
        
    }
    
    return 0;
}