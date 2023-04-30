// A 
// B B 
// C C C 
// D D D D 
// E E E E E

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    for(char i='A'; i<'A'+n; i++)
    {
        for(int j=1; j<= i-'A'+1; j++)
        {
            cout<<i<<" ";
        }
        cout<<endl;
    }
}