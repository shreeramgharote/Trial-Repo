#include<iostream>
#include<vector>
using namespace std;
int fact = 1;
void facto (int n)
{   fact *= n;
    if(n==1)
    {
        cout << fact << endl;
        return;
    }
    facto(n-1);

}
int main()
{
int n;cin>>n;
facto(n);
return 0;
}