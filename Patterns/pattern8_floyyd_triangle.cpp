#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int count=0;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
        //     count++;
        //  cout<<count<<" ";
        cout<<char('A'+count++)<<" ";
        }
        cout<<endl;
    }
    return 0;
}


/*
4
A 
B C 
D E F 
G H I J 
*/