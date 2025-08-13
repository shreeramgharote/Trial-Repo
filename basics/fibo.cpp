#include<iostream>
#include<vector>
using namespace std;
int a=0,b=1,i=0;
void fibo(int n)
{
    if(a<=b)
    {cout<<a<<" ";a=a+b;}
    else if(a>b)
    {cout<<b<<" ";
        b=a+b;
    
    }
    i++;
    if(i>n)return;
    fibo(n);
}
int main()
{
int n;
cin>>n;
fibo(n);
return 0;
}