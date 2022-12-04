#include<iostream>
using namespace std;
int gc(int a, int b)
{
    if(b==0)
    return a;
    else
    return gc(b,a%b);

}
int main()
{
    cout<<"enter the no."<<endl;
    int a,b;
    cin>>a>>b;
    cout<<gc(a,b);
    return 0;
}