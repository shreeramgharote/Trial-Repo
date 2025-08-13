#include<iostream>
#include<vector>
using namespace std;

int i = 1;
void oneton(int n)
{
    
    cout<<i<<endl;
    i++;
    if(i==n+1)
    {return;}
    oneton(n);
    

}
int main()
{
    int n;
    cin>>n;
oneton(n);
return 0;
}