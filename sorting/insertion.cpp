#include<iostream>
#include<array>
using namespace std;

void selection(array<int,5> &arr) {
   for (int i=0;i<arr.size();i++)
   {
    
    for(int j=i;j>0;j--){
        if(arr[j]<arr[j-1])
        {
            swap(arr[j], arr[j-1]);
        }
    }
    cout << "the array after " << i+1 << "th iteration: ";
    for(int k=0;k<arr.size();k++) {
        cout << arr[k] << " ";
    }
    cout << endl;
   }

}


int main()
{
array<int,5> arr = {5, 3, 8, 6, 2};
cout<< "Original array: ";
for(int i : arr) {
    cout << i << " ";
}
selection(arr);
return 0;
}