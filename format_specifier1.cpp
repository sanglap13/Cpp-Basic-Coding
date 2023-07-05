#include <bits/stdc++.h>
using namespace std;

int main() {
    char ch = 'A';
    short int a = -2;
    int b = -3;
    long int c = 2147483649;
    long long int d = 9223372036854775804;
    
    cout << "Value of ch : " << ch << endl;
    cout << "Value of a : " << a << endl;
    cout << "Value of b : " << b << endl;
    cout << "Value of c : " << c << endl;
    cout << "Value of d : " << d << endl;
    
    
    cout << "\n\n";
    cout << "b(int) when printed as typecasted short : " << (short int) b << endl;
    // checking if type casting conversion from int to short was successful or not
    cout << "Size of b(int) when type casted as short int : " << sizeof((short int) b) << endl;
    
    
    // MAX_LIMIT Short is 65535, rule states
    // if you're printing unsigned for negative value the result would be (val) + MAX_LIMIT + 1
    // -2 + 65535 + 1  = 65534
    
    cout << "Value of a(signed short) when typecasted as unsigned short : " << (unsigned short) a << endl;
    
    cout << "\n\n";

    // -3 + 4,294,967,295 + 1  = 4,294,967,293
    cout << "Value of b(signed int) when typecasted as unsigned int : " << (unsigned int) b << endl;

    cout << "\n\n";
    // MAX_Limit (int) is : 2,147,483,647 our number exceeds this by 2. So will go round about
    // to lower limit by 2
    // MIN_LIMIT (int) is -2,147,483,648 so 2nd number in this would be -2,147,483,647
    
    cout << "Value of c(long int) when typecasted as int : " << (int) c << endl;


    return 0;
}