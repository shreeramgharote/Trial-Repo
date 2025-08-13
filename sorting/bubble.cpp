#include<iostream>
#include<array>
using namespace std;
int main()
{
array<int,9> arr ={1,2,3,4,5,6,7,8,9};
int didSwap = 0;
for(int i=0;i<arr.size();i++)
{
    
    for(int j= arr.size()-1;j>i;j--)
    {
        if(arr[j]<arr[j-1])
        {
            swap(arr[j], arr[j-1]);
            didSwap = 1;
    }
}
if(didSwap == 0)
    {
        cout << "Array is sorted, no swaps needed." << endl;
    
        break; // No swaps means array is sorted
    }
cout<<arr[i]<<" ";
}
return 0;
}