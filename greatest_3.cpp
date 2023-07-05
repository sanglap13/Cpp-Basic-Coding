//C++ (Method 1)
#include<iostream>
using namespace std;
int main ()
{
    int first, second, third;
    
    cout << "Enter first number:"; cin >> first;
    cout << "Enter second number:"; cin >> second;
    cout << "Enter third number:"; cin >> third;
    
    //comparing first with other numbers
    if ((first >= second) && (first >= third))
        cout << first << " is the greatest "; 
       //comparing Second with other numbers else if ((second >= first) && (second >= third))
        cout << second << " is the greatest";
    else
        cout << third << " is the greatest";
 
    return 0;
}

// C++ (Method 2)
// #include<iostream>
// using namespace std;
// int main ()
// {
//     int first, second, third;
    
//     cout << "Enter first number:"; cin >> first;
//     cout << "Enter second number:"; cin >> second;
//     cout << "Enter third number:"; cin >> third;
    
//     int temp, result;

//     // find the largest bw first and second and store in temp
//     temp = first > second ? first:second;
//     // find the largest bw temp and third and finally printing it
//     result = temp > third ? temp:third;
        
//     // the above two ternary statements can be condensed into one ternary statement
//     //result = third > (first > second ? first : second) ? third : ((first > second) ? first : second);
    
//     cout << result << " is the largest";

 
//     return 0;
// }
// C++ (Method 3)
// #include<iostream>
// #include<algorithm>
// using namespace std;

// int main ()
// {
//     int first, second, third;
    
//     cout << "Enter first number:"; cin >> first;
//     cout << "Enter second number:"; cin >> second;
//     cout << "Enter third number:"; cin >> third;
    
//     int result;

//     result =  max(first,max(second, third));
    
//     cout << result << " is the largest";

 
//     return 0;
// }
