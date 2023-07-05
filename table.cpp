#include<iostream>
#include<math.h>
using namespace std;
void table(int x)
  {
      int i;
      for(i=1;i<=10;i++)
      {
          cout<<x<<" * "<<i<<" = "<<x*i<<"\n";
      }
  }


int main()
{
    int n;
    cout << "Enter the number : "; cin >> n;
    table(n);
    return 0;
}