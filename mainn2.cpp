#include <iostream>
#include <vector>
using namespace std;


int main()
{   
    vector<int> a; //agr isko size assign kari to basically utne position pe 0 hota hai so jab pushback karenge to 0th ki jagh 1st index pe jaega aur  0th pe 0 rahega
    cout<<"Enter Elements in the vector(write 00 to print the average of the numbers):";
    int sum=0;
    while(true)
    {
        int c;
        cin>>c;
        if(c==00)
        {break;}
        a.push_back(c);
        sum = sum + c;
    }
    cout<<endl<<endl;
    for(int A : a
    )
    { 
        cout<<a.at(A)<<" ";
        
        
    }
   cout<<sum<<endl;
    cout<<"The average is :";
    double avg =sum/a.size();
    cout<< avg;
    return 0;
}

