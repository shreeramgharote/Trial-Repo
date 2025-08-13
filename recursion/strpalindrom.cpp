#include<iostream>
#include<vector>
using namespace std;
int i=0;
bool strpal(string a, int n)
{
    if(i>=n/2){return true;}
    if(a[i]!=a[n-1-i])
    {
        
        return false;
    }
    i++;
    strpal(a,n);
}
int main()
{
string s;

cin>>s;
int n=s.size();
bool x=strpal(s,n);
if(x=0)
{cout<<"not palindrom";}
else cout<<"palindrom";

return 0;
}