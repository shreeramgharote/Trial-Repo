#include<iostream>
#include<vector>
using namespace std;
int main()
{
int in,div=0;
cin>>in;

cout<<endl<<"Divisors of "<<in<<" are :";
for(int i=in-1; i>1; i--)
{
   if(in%i==0)
   {
    cout<<i<<" ";
       
       
   }else
     div ++;
    }
if(div==in-2)
{
    cout<<endl<<"prime"<<endl;
}
else{cout<<endl<<"not prime"    <<endl;}
    
return 0;
}