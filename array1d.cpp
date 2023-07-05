//C++ (Method 1)
#include <iostream>
using namespace std;

int main (){
    //Initialize array
    int n,i;
    
    cout<<"Enter the length of the array\n"; cin>>n;

    int arr[n];
    cout<<"Enter the Elements of the array\n";
    
    for( i = 0;i<n;i++) cin>>arr[i];
        
    cout<<"Elements of given array: \n";
    //Loop through the array by incrementing value of i
    for (i = 0; i < n; i++)
        cout<<arr[i]<<" ";

    return 0;
}


// C++ (Method 2)
// #include <iostream>
// using namespace std;

// int main (){
//     //Initialize array
//     int n,i;
    
//     cout<<"Enter the length of the array\n"; cin>>n;

//     int arr[n];
//     cout<<"Enter the Elements of the array\n";
    
//     i = 0;
//     while(i < n){ cin>>arr[i];
//         i++;
//     }
//     cout<<"Elements of given array: \n";
//     //Loop through the array by incrementing value of i
//     for (i = 0; i < n; i++)
//         cout<<arr[i]<<" ";

//     return 0;
// }
// C++ (Method 3)
// #include <iostream>
 
// // Print contents of an array in C++ using array indices
// int main()
// {
//     int input[] = { 1, 2, 3, 4, 5 };
//     size_t n = sizeof(input)/sizeof(input[0]);
    
//     /* size_t is an unsigned integral data type which is defined in various header files such as:
//      , , , , ,  or  in C++
//     It’s a type which is used to represent the size of objects in bytes and is therefore 
//     used as the return type by the sizeof operator.
//     It is guaranteed to be big enough to contain the size of the biggest object the 
//     host system can handle. Basically the maximum permissible size is dependent on the 
//     compiler; if the compiler is 32 bit then it is simply a typedef(i.e., alias) for 
//     unsigned int but if the compiler is 64 bit then it would be a typedef for unsigned long long.
//     The size_t data type is never negative.*/
    
//     std::cout << "The size of size_t: " << sizeof(size_t) << "\n";
    
//     // The array elements are :
 
//     // loop through the array elements
//     for (size_t i = 0; i < n; i++) {
//         std::cout << input[i] << ' ';
//     }
 
//     return 0;
// }