#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int arr[5] = {5,3,4,6,1};
    for(int i=0;i<=4;i++)
    {
        for(int j=i+1;j<=4;j++)
        {
            if(arr[i]>arr[j])
            {
                swap(arr[i], arr[j]);
            }
        }
        cout<<arr[i]<<" ";
    }
    
return 0;
}