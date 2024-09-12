#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        //spaces
        for(int j=0;j<n-i-1;j++)
        {
            cout<<" "<<" "; 
        }

        //numbers
        for(int j=1;j<=i+1;j++)
        {
         cout<<j<<" ";
        }

        //numbers
         for(int j=1;j<i+1;j++)
        {
         cout<<j<<" ";
        }

        cout<<endl;
    }
    return 0;
}


/*
4
      1 
    1 2 1 
  1 2 3 1 2 
1 2 3 4 1 2 3 
*/