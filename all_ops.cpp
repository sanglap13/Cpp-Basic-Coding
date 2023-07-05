#include<iostream>
#include<math.h>
using namespace std;
int Add(int x, int y)
{
    int sum;
    sum=x+y;
    return sum;
}
int Subtract(int x, int y)
{
    int sub;
    sub = x-y;
    return sub;
}
int Multiply(int x, int y)
{
    int product;
    product=x*y;
    return product;
}
int Divison(int x, int y)
{
    int quotient;
    quotient=x/y;
    return quotient;
}
int Modulus(int x, int y)
{
    int rem;
    rem=x%y;
    return rem;
}
int Power(int x, int y)
{
    int power;
    power=pow(x,y);
    return power;
}

int main()
{
    int x, y;
    
    cin >> x;
    cin >> y;
    cout<<Add(x, y)<<"\n";
    cout<<Subtract(x, y)<<"\n";
    cout<<Multiply(x, y)<<"\n";
    cout<<Divison(x, y)<<"\n";
    cout<<Modulus(x, y)<<"\n";
    cout<<Power(x, y);


    return 0;
}