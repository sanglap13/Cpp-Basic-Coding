//C++ (Method 1)
#include<iostream>
using namespace std;

int main ()
{
  int num1, num2;
  cout << "Enter first number: "; cin >> num1;
  cout << "Enter second number:"; cin >> num2;
 
  if (num1 == num2)
      cout << "both are equal"; else if (num1 > num2)
      cout << num1 << " is greater than" << num2;
  else
      cout << num2 << " is greater than" << num1;

  return 0;
}

// C++ (Method 2)
// #include <bits/stdc++.h>
// using namespace std;

// int main ()
// {
//     int num1, num2, largest;
//     cout << "Insert two numbers: " << endl; cin >> num1 >> num2;
 
//     if(num1 == num2)
//         printf("Both are Equal\n");
//     else{
//         largest = num1 > num2? num1 : num2;
//         cout << largest << " is largest";
//     }

//   return 0;
// }
// C++ (Method 3)
// #include<iostream>
// // function max available in here
// #include<algorithm>

// using namespace std;

// int main ()
// {
//   int num1, num2;
//   cout << "Enter first number: "; cin >> num1;
//   cout << "Enter second number: "; cin >> num2;
 
//   if (num1 == num2)
//       cout << "both are equal";
//   else
//       cout << max(num1,num2) << " is greater";

//   return 0;
// }