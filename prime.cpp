#include<iostream>
using namespace std;
bool prime(int n)
{
    if(n==1)
    return false;
    if(n==2||n==3)
    return true;
    if(n%2==0||n%3==0)
    return false;
    for(int i=5;i*i<=n;i+=6)
    {
        if(n%i==0||n%(i+2)==0)
        return false;

    }
    return true;
}
int main()
{
    cout<<"enter the no. to be checked"<<endl;
    int n;
    cin>>n;
    if(prime(n))
    cout<<"no. is prime ";
    else
    cout<<"no. is not prime";
    return 0;
}