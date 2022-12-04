#include<iostream>
using namespace std;
void fac(int n)
{
    int i;
    for(i=1;i*i<=n;i++)
    {
        if(n%i==0)
        cout<<i<<" ";
    }
    for( ;i>=1;i--)
    {
        if(n%i==0)
        cout<<n/i<<" ";

    }
}
int main()
{
    cout<<"enter the no. "<<endl;
    int n;
    cin>>n;
    fac(n);
    return 0;
    
}