// Arrays ALWAYS pass by reference i.e., original value will be changed


#include<bits/stdc++.h>
using namespace std;

void doSomething(int a[], int n)
{
    a[1] += 100;
    cout<<"Value of a[1] inside function: "<<a[1]<<endl;
}
int main()
{
    int n=3;
    int a[n];
    for(int i=0; i<n; i++)
    {
        cin >> a[i];
    }
    for(int i=0; i<n; i++)
    {
        cout <<a[i]<<"\t";
    }
    cout<<endl;
    doSomething(a,n);
    cout<<"Value of a[1] inside main: "<<a[1]<<endl;
    return 0;
}