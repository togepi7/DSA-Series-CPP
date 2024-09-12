#include<bits/stdc++.h>
using namespace std;

int binary_to_decimal(int n)
{
   int pow=1;
   int ans=0;
   while(n>0)
   {
    int rem=n%10;
    n=n/10;
    ans=ans+(rem*pow);
    pow=pow*2;
   }
   return ans;
}

int main()
{
    int n;
    cin>>n;
    cout<<"The decimal form of "<<n<<" is "<<binary_to_decimal(n)<<endl;
    return 0;
}
