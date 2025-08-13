#include<iostream>
#include<vector>
using namespace std;
int sum = 0;
void sumofn(int n)
{
    if(n == 0)
    {
        cout << sum << endl;
        return;
    }
    sum += n;
    
    sumofn(n - 1);
}
int main()
{
    int n;
    cin>>n;
    sumofn(n);
    return 0;
}