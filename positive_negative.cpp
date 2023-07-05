//C++ (Method 0)
#include<iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter a number:"; 
    cin >> num;
    
    //Conditions to check if the number is negative or positive
    if (num > 0)
         cout << "The number is positive";
    else if (num < 0)
        cout << "The number is negative";
    else
        cout << "Zero";
    
    return 0;
}

// C++ (Method 1)
// #include<iostream>
// using namespace std;

// int main()
// {
//     int num;
//     cout << "Enter a number:"; cin >> num;
    
//     //Condition to check if the number is negative or positive
//     if (num >= 0)
//     {
//             if (num == 0)
//                     cout << "Zero";
//             else
//                     cout << "The number is positive";
//     }
//     else
//              cout << "The number is negative";
    
//     return 0;
// }
// C++ (Method 2)
// #include<iostream>
// using namespace std;

// int main()
// {
//     int num;
//     cout << "Enter a number:"; cin >> num;
    
//     //Condition to check if the 0, positive or negative
    
//     if(num == 0)
//             cout << "Zero"; else (num > 0) ? cout << "Positive": cout << "Negative";
    
//     return 0;
//}