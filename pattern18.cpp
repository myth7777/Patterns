// E 
// D E 
// C D E 
// B C D E 
// A B C D E 

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    for(int i=n; i>=1; i--)
    {
        for(int j=i; j<=n; j++)
        {
            cout<<(char)('A'+j-1)<<" ";
        }
        cout<<endl;
    }
}