//C++ (Method 1)
#include <iostream>
#include <math.h>
#include <iomanip>
// the above is used for setprecision

using namespace std;

int main()
{
    //To initialize variables
    double number, expo;
    double result;
    //To take user input
    cout << "Enter a base number: " << endl; cin >> number;
 
    //To display Exponent
    cout << "Enter an exponent: " << endl; cin >> expo;
 
    //use while loop when power is not equal to zero
    result = pow(number,expo);
    
    cout << "\n\n";

    // prints in double format
    printf("%lf power %lf is %lf\n",number, expo, result);
    // prints as double format but with 0 precision
    printf("%.0lf power %.0lf is %.0lf\n",number, expo, result);
    // also prints with no precision as double
    printf("%.lf power %.lf is %.lf\n",number, expo, result);
    // prints with 1 precision
    printf("%.1lf power %.1lf is %.1lf\n",number, expo, result);
    
    cout << "\n\n";
    cout << number << " power "  << expo << " is "  << result << endl;
    cout << fixed <<setprecision(1)<
}

// C++ (Method 2 without using inbuilt Methods)
// #include <iostream>
// #include <math.h>
// #include <iomanip>

// using namespace std;
// //main program
// int main()
// {
//     double base;
//     int exp;
    
//     cout<<"Enter base: "; cin>>base;
 
//     cout<<"Enter Exponent: "; cin>>exp;
 
//     double result = 1;
    
//     // can use this loop too
//     // for(int i = 0; i < exp; ++i)
//     //     result *= base;
       
//     // can use this loop too
//     // for(int i = 1; i <= exp; ++i)
//     //         result *= base;
    
//     // can use this loop too
//     // for (; exp!= 0; --exp)
//     //     result = result * base;
        
//     while (exp != 0)
//     {
//         result = result * base;
//         --exp;
//     }
 
//     //printing result
//     cout <<  " answer = " << result;

//     return 0;
// }