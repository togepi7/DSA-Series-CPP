#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int count=0;
    for(int i=0;i<n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            count++;
            cout<<count<<" ";
        }
        cout<<endl;
    }
    return 0;
}


/*
3

1 2 3 
4 5 6 
7 8 9 
*/