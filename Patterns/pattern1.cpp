#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<char('A'+j)<<" "; //else it would print the ascii values
        }
        cout<<endl;
    }
    return 0;
}


/*
A B C D 
A B C D 
A B C D 
A B C D
*/