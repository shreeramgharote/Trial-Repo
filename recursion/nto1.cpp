#include<iostream>
#include<vector>
using namespace std;

void ntoone(int* x)//wanted to try calling by reference
{
    cout<<*x<< " ";
    *x=*x-1;
    if(*x==0)
    {
        return;
    }
    ntoone(x);
}
int main()
{
int n;
cin>>n;
ntoone(&n);
cout<<endl<<n;
return 0;
}