#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int a, b,hcf;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    if(a>b)
    {
        for(int i=b;i>=1;i--)
        {
            if(a%i ==0 && b%i==0)
            {
                cout<<"HCF is "<<i<<endl;
                break;
            }
        }

        }
    else if(a<b)
        {
            for(int i=a;i>=1;i--)
        {
            if(a%i ==0 && b%i==0)
            {
                cout<<"HCF is "<<i<<endl;
                break;
            }
        }
    }
    else{
        hcf= a;
        cout<<"As both numbers are same, HCF is "<< hcf;
    }
    // Calculate HCF using Euclidean algorithm                                                      
        
return 0;
}