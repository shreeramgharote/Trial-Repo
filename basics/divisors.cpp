#include<iostream>
#include<vector>
using namespace std;
int main()
{
int in,div;
cin>>in;

cout<<endl<<"Divisors of "<<in<<" are :"<<endl;
for(int i=in; i>0; i--)
{
   if(in%i==0)
   {
       
       cout<<i<<endl;
   }
}
return 0;
}