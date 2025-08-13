#include<iostream>
#include<vector>
using namespace std;
int i=0;
void namentimes(int n)
{
    i++;
    
    cout<<"nandu nagarkar"<<endl;
    if(i==n)
    {return;}
    namentimes(n);
}
int main()
{
        namentimes(5);
    

return 0;
}