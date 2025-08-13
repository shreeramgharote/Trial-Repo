#include<iostream>
#include<vector>
using namespace std;
int hashh[100000], i = 0;
void hashhhh(int orig[])
{for(int i=0;i<sizeof(orig);i++)
    hashh[orig[i]]+=1; //jo number hoga orig[i] pe wo hashh array ke index pe increment hoga
    //hashh[orig[i]]++; //ye bhi chalega

   
}

int main()
{
int n,qno;
cin>>n;
int no[n];
for(int i=0;i<n;i++)
{
    cin>>no[i];
}
cin>>qno;
int queries[qno];
hashhhh(no);
for(int i=0;i<qno;i++)
{
    cin>>queries[i];
    cout<<hashh[queries[i]]<<" ";
}

return 0;
}