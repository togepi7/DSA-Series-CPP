#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int k=0;k<i-1;k++)
        {
            cout<<"  "; //include two spaces, one for leaving empty, another for mainting the line distance
        }
        for(int j=n;j>=i;j--)
        {
         cout<<i<<" ";
        }
        cout<<endl;
    }
    return 0;
}


/*
1 1 1 1 1 1 1 1 
 2 2 2 2 2 2 2 
  3 3 3 3 3 3 
   4 4 4 4 4 
    5 5 5 5 
     6 6 6 
      7 7 
       8 
*/