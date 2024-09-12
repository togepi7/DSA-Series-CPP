#include<bits/stdc++.h>
using namespace std;

int decimal_to_binary(int n)
{
   int pow=1;
   int ans=0;
   while(n>0)
   {
    int rem=n%2;
    n=n/2;
    ans=ans+(rem*pow); /*we need to multiply rem by the multiple of 10, bcoz it needs to be printed in the reverse order*/
    pow=pow*10;
   }
   return ans;
}

int main()
{
    int n;
    cin>>n;
    cout<<"The binary number of "<<n<<" is "<<decimal_to_binary(n)<<endl;
    return 0;
}
