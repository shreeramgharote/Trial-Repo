#include<iostream>
#include<vector>
using namespace std;
int main()
{
   vector<int> n;
   int a,b;
   cin >> a;
   while(true)
   {
        b = a % 10;
        n.push_back(b);
        a= a/10;
        if(a<1)
        {
            break;
        }
   }
   for(int a = 0; a < n.size(); a++)
   {
    int x = n.at(a) - n.at(n.size()-1-a);
    if(x!=0)
    {
        cout<<"not palindrome"<<endl;
        break;
    }
    
   }
    return 0;
}