//C++ (Method 1)
#include<iostream>
using namespace std;
int main ()
{
    cout << "Enter a number:"; int number; cin >> number;
 
    //checking whether the number is even or odd
    if (number % 2 == 0)
        cout << number << " Even";
    else
        cout << number << " Odd";
        
    return 0;
}


// C++ (Method 2)
// #include<iostream>
// using namespace std;

// int main ()
// {
//     cout << "Enter a number:"; int number; cin >> number;

    
//     //Checking if the number is divisible by 2
//     number % 2 == 0? cout <<"Even":cout << "Odd";
    
//     return 0;
// }
// C++ (Method 3 - using Bitwise Ops)
// #include <iostream>
// using namespace std;
 
// // Returns true if n is even, else odd
// bool isEven(int number)
// {
     
//     // n & 1 is 1, then odd, else even
//     return (!(number & 1));
// }
 
// // Driver code
// int main()
// {
// int number;
// cout << "Enter the number: "; cin >> number;
// cout << "\n";

// if(isEven(number))
//     cout << "Even";
// else
//     cout << "Odd";

// //isEven(number)? cout << "Even" : cout << "Odd";
 
//     return 0;
// }